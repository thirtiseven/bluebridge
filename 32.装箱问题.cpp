#include <iostream>
#include <cmath>
#include <algorithm>
#define MAX_V 20001
#define MAX_N 31
using namespace std;
int RSvalue[MAX_N][MAX_V];
int weight[MAX_N];

int test = 0;

void Ready(int v,int n){
	for(int i=0;i<=n;i++)
		for(int j=0;j<=v;j++)
			RSvalue[i][j]=-1;
}

int ResidueSpace(int v,int n)
{
	int rr;
	if(n==0){
		if(v>=weight[n]){
			rr = v-weight[n];
		}else{
			rr = v;
		}
	}else if(v>=weight[n]){
		rr=min(ResidueSpace(v,n-1),ResidueSpace(v-weight[n],n-1));
	}else{
		rr=ResidueSpace(v,n-1);
	}
	RSvalue[n][v]=rr;
	return rr;
}

int main()
{
	int v,n;
	cin>>v>>n;
	for(int i=0;i<n;i++)
		cin>>weight[i];
	Ready(v,n);
	cout<<ResidueSpace(v,n-1);
	return 0;
}