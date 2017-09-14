#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<time.h>
using namespace std;

struct node{
	string value;
	int sup=0;
	vector<vector<int> > L;
};


void compute_support(node &x,vector<string> &d){
	for (int i=0;i<d.size();i++){
		vector<int> tmp;
		tmp.clear();
		int pos = 0;
		pos = d[i].find(x.value,pos);
		while (pos!=string::npos){
			tmp.push_back(pos);
			pos = d[i].find(x.value,pos+1);
		}
		x.L.push_back(tmp);
		if (tmp.size()>0) x.sup++;
	}


}

void spade(vector<node> &p,int minsup,vector<string> &F,vector<int> &sup){
	for (int i=0;i<p.size();i++){
		F.push_back(p[i].value);
		sup.push_back(p[i].sup);
		vector<node> pnew;
		pnew.clear();
		for (int j=0;j<p.size();j++){
			node tmpnode;
			tmpnode.value = p[i].value;
			tmpnode.value += p[j].value[p[j].value.size()-1];
			//compute support
			for (int q=0; q<p[i].L.size(); q++){
				vector<int> tmpvec;
				tmpvec.clear();
				if ((p[i].L[q].size()==0)||(p[j].L[q].size()==0)){
					tmpnode.L.push_back(tmpvec);
					continue;
				}
				for (int w=0; w<p[j].L[q].size();w++){
					if (p[j].L[q][w]>p[i].L[q][0]) tmpvec.push_back(p[j].L[q][w]);	
				}
				tmpnode.L.push_back(tmpvec);
				if (tmpvec.size()>0) tmpnode.sup++;
			}
	/*		cout <<tmpnode.value<<": "<<endl;
			for (int i = 0 ;i < tmpnode.L.size();i++){
				for (int j = 0; j < tmpnode.L[i].size();j++)
					cout<<tmpnode.L[i][j]<<" ";
				cout<<endl;
			
			}
*/

			if (tmpnode.sup >= minsup) pnew.push_back(tmpnode);
		}
		if (pnew.size()>0) spade(pnew,minsup,F,sup);
	}
}

int main(int argc, char *argv[]){
	vector<string> DB;
	int minsup;
	clock_t t1;
	clock_t t2;
	
	//input DB
	
	ifstream ifile;
	ofstream ofile;
	ifile.open("sequencedb.txt");
	ofile.open("spade.out");
	minsup = atoi(argv[1]);
	string tmmp;
	int n=0;
	int limit = 2000;
//	cin>>limit;
	while (getline(ifile,tmmp)){
		if (tmmp[0]!='>') {DB.push_back(tmmp);	n++;}
		if (n==limit) break;
	}
	
	t1 = clock();
	
	vector<node> P;
	string tmp = "ACGT";
	for (int i=0;i<4;i++){
		node tmpnode;
		tmpnode.value = tmp[i];
		compute_support(tmpnode,DB);

		if (tmpnode.sup>=minsup){
			P.push_back(tmpnode);	
		}
		//test
	/*	cout <<tmpnode.value<<": "<<endl;
		for (int i = 0 ;i < tmpnode.L.size();i++){
			for (int j = 0; j < tmpnode.L[i].size();j++)
				cout<<tmpnode.L[i][j]<<" ";
			cout<<endl;
			
		}*/
	}


	vector<string> F;
	vector<int> sup;
	spade(P,minsup,F,sup);
	
	t2 = clock();
	cout << "Running time: "<<(float)(t2-t1)/CLOCKS_PER_SEC<<"seconds"<<endl;
	for (int i=0;i<F.size();i++){
		ofile<<F[i]<<" "<<sup[i]<<endl;	
	}

	ifile.close();
	ofile.close();

}
