#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

struct edge{
int u;
int v;
int length;
};
void findpath(int u,int *pre){
	if (pre[u]==u) {cout<<u<<" "; return;}
	findpath(pre[u],pre);
	cout<<u<<" ";
}


int main(){
	int n;
	int start;
	int end;
	cin>>n>>start>>end;
	istringstream istring;
	string tmpstr;
	queue<int> que;
	int *indegree=new int [n];
	int *edgenum=new int [n];
	int *dis=new int [n];
	int *pre=new int [n];
	int *visit=new int [n];
	vector<int> r;
	vector<edge> vece;
	vector<vector<edge> > adjlist;
	for (int i=0;i<n;i++){
		indegree[i]=0;
		adjlist.push_back(vece);
		edgenum[i]=0;
		dis[i]=2147483647;
		pre[i]=-1;
		r.push_back(i);
		visit[i]=0;
	}
	while (getline(cin,tmpstr)){
		if (tmpstr=="") continue;
		istringstream istream(tmpstr);
		edge tmpedge;
		istream>>tmpedge.u>>tmpedge.v>>tmpedge.length;
	//	cout<<tmpedge.u<<" "<<tmpedge.v<<" "<<tmpedge.length<<endl; 
		vece.push_back(tmpedge);
		adjlist[tmpedge.u].push_back(tmpedge);
		edgenum[tmpedge.u]++;
		indegree[tmpedge.v]++;
	}
	//input	
	if (start==end){	
		cout<<"Shortest path length is 0"<<endl;
		cout<<"Shortest path is "<<start<<" "<<endl;;
	}
	else{

	pre[start]=start;
	dis[start]=0;
	while (!r.empty()){
		int min=2147483647;
		int j;int k;
		for (int i=0;i<r.size();i++){
			if (dis[r[i]]<min) {
				min=dis[r[i]];
				j=r[i];
				k=i;
			}
		}//find min D(v)
		if (min==2147483647) break;
		r.erase(r.begin()+k);//remove v
		visit[j]=1;//declear v's shortest path is known
		for (int i=0;i<edgenum[j];i++){
			if (visit[adjlist[j][i].v]==0){
				if (dis[j]+adjlist[j][i].length<dis[adjlist[j][i].v]){
					dis[adjlist[j][i].v]=dis[j]+adjlist[j][i].length;
					pre[adjlist[j][i].v]=j;
				}		
			}	
		}
	}
	if (dis[end]==2147483647) cout<<"No path exists!"<<endl;
	else {
		cout<<"Shortest path length is "<<dis[end]<<endl;
		cout<<"Shortest path is ";
		findpath(end,pre);
		cout<<endl;
	}
	}//shortest path
	

	for (int i=0;i<n;i++){
		if (indegree[i]==0) que.push(i);	
		//cout<<indegree[i]<<endl;
	}
	while (!que.empty()){
		int tmpv=que.front();
		que.pop();
		for (int i=0;i<edgenum[tmpv];i++){
			indegree[adjlist[tmpv][i].v]--;
			if (indegree[adjlist[tmpv][i].v]==0) que.push(adjlist[tmpv][i].v);
		}	
	}
	int DAG=1;
	for (int i=0;i<n;i++){
		if (indegree[i]>0) {DAG=0;break;}
	}
	cout<<"The graph is ";
	if (DAG==0) cout<<"not ";
	cout<<"a DAG"<<endl;
	



	delete[] edgenum;
	delete[] dis;
	delete[] pre;
	delete[] visit;
	delete[] indegree;
	return 0;
}
