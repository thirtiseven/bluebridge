#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	if(n <= 0){
		return 0;
	}
	n++;
	int biu;
	while(n--){
		biu = n;
		while(biu--){
			cout << "*" << ' ';
		}
		cout << endl;
	}
	return 0;
}