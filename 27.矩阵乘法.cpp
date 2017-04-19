#include <iostream>  
  
using namespace std;  
    
void print(int c[][101],int n){  
	 for(int i=0;i<n;i++){  
		for(int j=0;j<n;j++){  
			cout<<c[i][j]<<" ";  
		}  
		cout<<endl;  
	}  
}  
   
void matrix(int a[][101],int b[][101],int c[][101],int n,int m){  
	for(int p=1;p<m;p++){  
		for(int i=0;i<n;i++){  
			for(int j=0;j<n;j++){  
				int t=0;  
				for(int k=0;k<n;k++){  
					t+=a[i][k]*b[k][j];  
					c[i][j]=t;  
				}  
			}  
		}  
		for(int i=0;i<n;i++){  
			for(int j=0;j<n;j++){  
				b[i][j]=c[i][j];  
			}  
		}  
	}  
}  
  
int main(int argc, char *argv[]){  
	int n,m;  
	int a[101][101]={0},b[101][101]={0},c[101][101]={0};  
	cin >> n >> m;  
	for(int i=0;i<n;i++){  
		for(int j=0;j<n;j++){  
			cin>>a[i][j];  
		}  
	}  
	for(int i=0;i<n;i++){  
		for(int j=0;j<n;j++){  
			b[i][j] = a[i][j];  
		}  
	}  
  
	if(m==0){  
		for(int i=0;i<n;i++){  
			for(int j=0;j<n;j++){  
				if(i == j){
					c[i][j]=1; 
				 }
			}  
		}  
		print(c,n);  
	}else if(m==1){  
		print(a,n);  
	}else{  
		matrix(a,b,c,n,m);  
		print(c,n);  
	}  
	return 0;  
} 