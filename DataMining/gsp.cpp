#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<time.h>
using namespace std;

struct node{
	string value;
	int sup = 0;
	node *parent;
	vector<string> child;
};


int compute_support(vector<node> &c,vector<string> &d){
	for (int i=0; i<d.size(); i++){
		for (int j=0; j<c.size(); j++){
			bool result = true;
			int pos = -1;
			for (int k = 0; k<c[j].value.size() ; k++){
				pos = d[i].find(c[j].value[k],pos+1);
				if (pos == string::npos){
					result = false;
					break;
				}
			}
			if (result==true) c[j].sup++;
		}	
	}
	return 0;
}

int extend_tree(vector<node> &cprev, vector<node> &c, vector<node> &cnext){
	cnext.clear();
	//for each leaf ra
	for (int i=0; i<c.size(); i++){
		node father = *c[i].parent;
		//for each leaf rb (subling of ra)
		for (int j=0; j<(father.child).size(); j++){
			//create rab
			string rab = c[i].value;
		//	cout<<rab<<"   ";
			rab += father.child[j][(father.child[j]).length()-1];
		//	cout<<rab<<"   ";
			//prune if has infrequent component 
			bool flag = 1;
			for (int k=0;k<rab.length();k++){
				string tmp = rab;
				tmp.erase(k,1);
				bool exist = 0;
				for (int p=0;p<c.size();p++){
					if (c[p].value==tmp) {
						exist = 1;
						break;
					}
				}
				if (exist==0) {
					flag = 0;
					break;
				}
			}
			//add as child of ra
		//	cout<<rab<<" "<<flag<<endl;
			if (flag == 1){
				c[i].child.push_back(rab);
				node tmpnode;
				tmpnode.value = rab;
				tmpnode.sup = 0;
				tmpnode.parent = &c[i];
				cnext.push_back(tmpnode);
			}	
		}
	}
	cprev.swap(c);
	c.swap(cnext);
	return 0;
}

int main(int argc, char *argv[]){
	clock_t t1;
	clock_t t2;
	
	//input DB
	
	int minsup;
	vector<string> DB;
	ifstream ifile;
	ofstream ofile;
	ifile.open("sequencedb.txt");
	ofile.open("gsp.out");
	minsup = atoi(argv[1]);
	string tmp;
	int n=0;
	int limit = 2000;
	//cin>>limit;
	while (getline(ifile,tmp)){
		if (tmp[0]!='>') {DB.push_back(tmp);n++;}
		if (n==limit) break;
	}

	t1 = clock();
	//initialize root
	node root;
	root.value = "";
	root.parent = NULL;
	root.child.push_back("A");
	root.child.push_back("C");
	root.child.push_back("G");
	root.child.push_back("T");
	//initialize F, C 
	vector<string> F;
	vector<int> sup;
	vector<node> C;
	vector<node> Cnext;
	vector<node> Cprev;
	F.clear();
	C.clear();
	
	for (int i=0;i<4;i++){
		node tmp;
		tmp.value = root.child[i];
		tmp.parent = &root;
		tmp.sup = 0;
		tmp.child.clear();
		C.push_back(tmp);
	}
	int k=1;
	while (C.size()>0){
		compute_support(C,DB);	
		for (int i=0;i<C.size();i++){
			if (C[i].sup >= minsup){
				F.push_back(C[i].value);
				sup.push_back(C[i].sup);
			}
			else {
				C.erase(C.begin()+i);
				i--;
			}
		}
		extend_tree(Cprev,C,Cnext);	
		k++;
	}
	//output
	t2 = clock();

	cout<<"Running time: "<<(float)(t2-t1)/CLOCKS_PER_SEC<<"seconds"<<endl;
	for (int i=0;i<F.size();i++){
		ofile<<F[i]<<" "<<sup[i]<<endl;	
	}
	ifile.close();
	ofile.close();
}
