#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	int a[5000] = {0};
	for(int i = 0;i < 5000;i++){
		a[i] = 0;
	}
	a[0] = 1;
	int numlen = 1;
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < 4000;j++){
			a[j] *= i;
		}
		for(int j = 0;j <= 4000;j++){
			if(a[j] > 9){
				a[j+1] += a[j] / 10;
				a[j] = a[j] % 10;
			}
		}
	}
	int flag = 0;
	for(int i = 4000;i>=0;i--){
		if(a[i] == 0 && flag == 0){
			continue;
		}
		cout << a[i];
		flag = 1;
	}
	return 0;
}