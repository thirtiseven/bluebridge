#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	int alice[250];
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> alice[i];
	}
	sort(alice,alice+n);
	for(int i = 0;i < n;i++){
		cout << alice[i] << ' ';
	}
	cout << endl;
	return 0;
}