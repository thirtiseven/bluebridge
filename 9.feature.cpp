#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	long long ago[1100];
	int max = -10000 , min = 10000 , sum = 0 , that;
	for(int i = 1;i <= n;i++){
		cin >> that;
		if(that > max){
			max = that;
		}
		if(that < min){
			min = that;
		}
		sum += that;
	}
	cout << max << endl;
	cout << min << endl;
	cout << sum << endl;
	return 0;
}