#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	long long ago[1100];
	for(int i = 1;i <= n;i++){
		cin >> ago[i];
	}
	int algodon;
	cin >> algodon;
	for(int i = 1;i <= n;i++){
		if(ago[i] == algodon){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}