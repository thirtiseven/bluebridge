#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n , m;
	cin >> n >> m;
	int a[110][110];
	int b[110][110];
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> b[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		cout << a[i][0] + b[i][0];
		for(int j = 1;j < m;j++){
			cout << ' ' << a[i][j] + b[i][j];
		}
		cout << endl;
	}
	return 0;
}