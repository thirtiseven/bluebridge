#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {  
	int i,t,k,j=0,a[1000];  
	for(i=1000;i<10000;i++){  
		if(i%10*1000+i/10%10*100+i/100%10*10+i/1000==i){
			a[j++]=i;  
		}
	 } 
		for (i=0;i<j;i++){ 
				cout << a[i] << endl;  
		}
	return 0;
}