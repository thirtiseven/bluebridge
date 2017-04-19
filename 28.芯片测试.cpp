#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	int test[30][30];
	int good[30];
	for(int i = 1;i <=30;i++){
		good[i] = 0;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> test[i][j];
		}
	}
	
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(j!=i){
				good[i] += test[j][i];
			}
		}
	}
	for(int i = 1;i <= n;i++){
		if(good[i] >= n/2){
			cout << i << ' ';
		}
	}
	return 0;
}