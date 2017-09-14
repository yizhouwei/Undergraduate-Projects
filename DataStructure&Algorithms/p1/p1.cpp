#include<iostream>
#include<ctime>
using namespace std;

void bubble(int *a,int n);
void insertion(int *a, int n);
void selection(int *a,int n);
void merge(int *a,int left,int right);
void quick1(int *a, int left, int right);
void quick2(int *a, int left, int right);





int main(){
	int n=0;
	int method=0;
	cin>>method>>n;
	int *a=new int [n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		}

	srand((unsigned)time(NULL));
	if (method==0){
		bubble(a,n);
		}
	else if (method==1){
		insertion(a,n);
		}
	else if (method==2){
		selection(a,n);
		}
	else if (method==3){
		merge(a,0,n-1);
		}
	else if (method==4){
		quick1(a,0,n-1);
		}
	else if (method==5){
		quick2(a,0,n-1);
		}

	for (int i=0;i<n;i++){
		cout<<a[i]<<endl;
		}


	return 0;	
	}

void bubble(int *a, int n){
	for (int i=0;i<n;i++){
		for (int j=n-1;j>0;j--){
			if (a[j]<a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
				}
			}
		}	
	}

void insertion(int *a,int n){
	for (int i=1;i<n;i++){
		for (int j=0;j<=i;j++)
			if (a[i]<a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
				}
		}
	}

void selection(int *a,int n){
	for (int i=0;i<n;i++){
		int min=i;
		for (int j=i;j<n;j++){
			if (a[j]<a[min]){
				min=j;
				}
			}
		int t=a[i];
		a[i]=a[min];
		a[min]=t;
		}
	}
void mmerge(int *a,int left,int mid,int right){
	int n=right-left+1;
	int *tmp=new int [n];
	int k=0;
	int i=left;
	int j=mid+1;
	while ((i<=mid)&&(j<=right)){
		if (a[i]<a[j]) tmp[k++]=a[i++];
		else tmp[k++]=a[j++];
		}
	if (i>mid) {
		while (j<=right){
			tmp[k++]=a[j++];
			}
		}
	else {
		while (i<=mid){
			tmp[k++]=a[i++];
			}
		}
	for (i=left;i<=right;i++)
		a[i]=tmp[i-left];

	delete[] tmp;
	}

void merge(int *a,int left,int right){
	if (left>=right) return;
	int mid=(left+right)/2;
	merge(a,left,mid);
	merge(a,mid+1,right);
	mmerge(a,left,mid,right);
	}

void quick1(int *a, int left, int right){
	if (left>=right) return;
	int mid=left+1+(rand()%(right-left));
	int n=right-left+1;
	int *tmp=new int [n];
	int k=0;
	n--;
	for (int i=left;i<=right;i++){
		if (i==mid) continue;
		if (a[i]<=a[mid]){ tmp[k++]=a[i];}
		else if (a[i]>a[mid]) {tmp[n--]=a[i];}
		}
	tmp[n]=a[mid];
	for (int i=left;i<=right;i++){
		a[i]=tmp[i-left];
		}
	mid=n+left;
	delete[] tmp;
	quick1(a,left,mid-1);
	quick1(a,mid+1,right);
	} 

void quick2(int *a, int left, int right){
	if (left>=right) return;
	int mid=left+1+(rand()%(right-left));
	int i=left+1;
	int j=right;
	int t=a[mid];
	a[mid]=a[left];
	a[left]=t;
	while (i<=j){
		while (a[i]<=a[left]) i++;
		while (a[j]>a[left]) j--;
		if (i>=j) break;
		int t=a[i];
		a[i]=a[j];
		a[j]=t;


		}
	t=a[j];
	a[j]=a[left];
	a[left]=t;
	quick2(a,left,j-1);
	quick2(a,j+1,right);
	
	
	}

