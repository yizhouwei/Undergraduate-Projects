#include<iostream>
#include<fstream>
#include<unistd.h>
#include<getopt.h>
#include"binary_heap.h"
#include"unsorted_heap.h"
#include"priority_queue.h"
using namespace std;
struct compare{
	bool operator()(int *a, int*b) const {
		if ((a[0]<b[0])||((a[0]==b[0])&&(a[2]<b[2]))||((a[0]==b[0])&&(a[2]==b[2])&&(a[1]<b[1]))) return 1;
		else return 0;
	}
};
//EFFECT: return the path from (x,y) to its previous location
void trace_back(int** pre_x,int** pre_y,int x,int y){
	if ((pre_x[x][y]==-1)&&(pre_y[x][y]==-1)){
		cout<<"("<<y<<", "<<x<<")"<<endl;
		return;
	}
	else trace_back(pre_x,pre_y,pre_x[x][y],pre_y[x][y]);
	cout<<"("<<y<<", "<<x<<")"<<endl;
	return;
}


int main(int argc, char*argv[]){
	int verbose=0;
	bool binary=1;
	int option_index=0;
	char *optstring="vi:";
	
	static struct option long_options[]={
		{"implementation",1,NULL,'i'},
		{"verbose",0,NULL,'v'},
		{0,0,0,0}
	};
	int opt;
	while ((opt=getopt_long(argc,argv,optstring,long_options, &option_index))!= -1){
		if (opt=='v') verbose=1;
		if (opt=='i') {
			if (optarg=="BINARY") binary=1;
			if (optarg=="UNSORTED") binary=0;
		}
	}
	ifstream ifile;
	ifile.open(argv[argc-1]);
	priority_queue<int*,compare> *heap;
	if (binary) heap=new binary_heap<int*,compare>;
	else heap=new unsorted_heap<int*,compare>;
	int width;
	int height;
	int start_x;
	int start_y;
	int end_x;
	int end_y;
	ifile>>width>>height>>start_y>>start_x>>end_y>>end_x;
	int **data=new int* [height];
	int ***path=new int** [height];
	bool **visit=new bool* [height];
	int **pre_x=new int* [height];
	int **pre_y=new int* [height];
	for (int i=0;i<height;i++){
		data[i]=new int [width];
		path[i]=new int* [width];
		visit[i]=new bool [width];
		pre_x[i]=new int [width];
		pre_y[i]=new int [width];
		}
	for (int i=0;i<height;i++)
		for (int j=0;j<width;j++)
			path[i][j]=new int [3];//give space to dynamic arrays
	for (int i=0;i<height;i++)
		for (int j=0;j<width;j++){
			ifile>>data[i][j];
			visit[i][j]=0;
			path[i][j][0]=0;
			path[i][j][1]=i;
			path[i][j][2]=j;
		}
	visit[start_x][start_y]=1;
	pre_x[start_x][start_y]=-1;
	pre_y[start_x][start_y]=-1;
	path[start_x][start_y][0]=data[start_x][start_y];
	heap->enqueue(path[start_x][start_y]);
	int step=0;
	while (!heap->empty()){
		int *tmp=heap->dequeue_min();
		int cur_x=tmp[1];
		int cur_y=tmp[2];

		if (verbose==1){
			cout<<"Step "<<step<<endl;
			cout<<"Choose cell ("<<cur_y<<", "<<cur_x<<") with accumulated length "<<tmp[0]<<"."<<endl;
			step++;
		}
		
		if ((cur_y+1<width)&&(!visit[cur_x][cur_y+1])){
			path[cur_x][cur_y+1][0]=data[cur_x][cur_y+1]+tmp[0];
			visit[cur_x][cur_y+1]=1;
			pre_x[cur_x][cur_y+1]=cur_x;
			pre_y[cur_x][cur_y+1]=cur_y;
			if ((cur_x==end_x)&&(cur_y+1==end_y)){
				if (verbose==1){
				cout<<"Cell ("<<cur_y+1<<", "<<cur_x<<") with accumulated length "<<path[cur_x][cur_y+1][0]<<" is the ending point."<<endl;	
				}//verbose print
				cout<<"The shortest path from ("<<start_y<<", "<<start_x<<") to ("<<end_y<<", "<<end_x<<") is "<<path[end_x][end_y][0]<<"."<<endl<<"Path:"<<endl;;	
				trace_back(pre_x,pre_y,end_x,end_y);
				break;
			}
			else heap->enqueue(path[cur_x][cur_y+1]);
			if (verbose==1){
				cout<<"Cell ("<<cur_y+1<<", "<<cur_x<<") with accumulated length "<<path[cur_x][cur_y+1][0]<<" is added into the queue."<<endl;	
			}//verbose print
		}//right

		if ((cur_x+1<height)&&(!visit[cur_x+1][cur_y])){
			path[cur_x+1][cur_y][0]=data[cur_x+1][cur_y]+tmp[0];
			visit[cur_x+1][cur_y]=1;
			pre_x[cur_x+1][cur_y]=cur_x;
			pre_y[cur_x+1][cur_y]=cur_y;
			if ((cur_x+1==end_x)&&(cur_y==end_y)){
				if (verbose==1){
				cout<<"Cell ("<<cur_y<<", "<<cur_x+1<<") with accumulated length "<<path[cur_x+1][cur_y][0]<<" is the ending point."<<endl;	
				}//verbose print
				cout<<"The shortest path from ("<<start_y<<", "<<start_x<<") to ("<<end_y<<", "<<end_x<<") is "<<path[end_x][end_y][0]<<"."<<endl<<"Path:"<<endl;;	
				trace_back(pre_x,pre_y,end_x,end_y);
				break;

			}
			else heap->enqueue(path[cur_x+1][cur_y]);
			if (verbose==1){
				cout<<"Cell ("<<cur_y<<", "<<cur_x+1<<") with accumulated length "<<path[cur_x+1][cur_y][0]<<" is added into the queue."<<endl;	
			}//verbose print

		}//down


		if ((cur_y-1>=0)&&(!visit[cur_x][cur_y-1])){
			path[cur_x][cur_y-1][0]=data[cur_x][cur_y-1]+tmp[0];
			visit[cur_x][cur_y-1]=1;
			pre_x[cur_x][cur_y-1]=cur_x;
			pre_y[cur_x][cur_y-1]=cur_y;
			if ((cur_x==end_x)&&(cur_y-1==end_y)){
				if (verbose==1){
					cout<<"Cell ("<<cur_y-1<<", "<<cur_x<<") with accumulated length "<<path[cur_x][cur_y-1][0]<<" is the ending point."<<endl;	
				}//verbose print
				cout<<"The shortest path from ("<<start_y<<", "<<start_x<<") to ("<<end_y<<", "<<end_x<<") is "<<path[end_x][end_y][0]<<"."<<endl<<"Path:"<<endl;;	
				trace_back(pre_x,pre_y,end_x,end_y);
				break;
			}
			else heap->enqueue(path[cur_x][cur_y-1]);
			if (verbose==1){
				cout<<"Cell ("<<cur_y-1<<", "<<cur_x<<") with accumulated length "<<path[cur_x][cur_y-1][0]<<" is added into the queue."<<endl;	
			}//verbose print

		}//left

		if ((cur_x-1>=0)&&(!visit[cur_x-1][cur_y])){
			path[cur_x-1][cur_y][0]=data[cur_x-1][cur_y]+tmp[0];
			visit[cur_x-1][cur_y]=1;
			pre_x[cur_x-1][cur_y]=cur_x;
			pre_y[cur_x-1][cur_y]=cur_y;
			if ((cur_x-1==end_x)&&(cur_y==end_y)){
				if (verbose==1){
					cout<<"Cell ("<<cur_y<<", "<<cur_x-1<<") with accumulated length "<<path[cur_x-1][cur_y][0]<<" is the ending point."<<endl;	
				}//verbose print

				cout<<"The shortest path from ("<<start_y<<", "<<start_x<<") to ("<<end_y<<", "<<end_x<<") is "<<path[end_x][end_y][0]<<"."<<endl<<"Path:"<<endl;;	
				trace_back(pre_x,pre_y,end_x,end_y);
				break;
			}
			else heap->enqueue(path[cur_x-1][cur_y]);
			if (verbose==1){
				cout<<"Cell ("<<cur_y<<", "<<cur_x-1<<") with accumulated length "<<path[cur_x-1][cur_y][0]<<" is added into the queue."<<endl;	
			}//verbose print

		}//up		
	}
	for (int i=0;i<height;i++)
		for (int j=0;j<width;j++)
			delete[] path[i][j];

	for (int i=0;i<height;i++){
		delete[] data[i];
		delete[] path[i];
		delete[] visit[i];
		delete[] pre_x[i];
		delete[] pre_y[i];
		}
	delete[] data;
	delete[] path;
	delete[] visit;
	delete[] pre_x;
	delete[] pre_y;
	delete heap;
	return 0;
}

