#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	int array[150];
	int brray[150];
	array[0] = 1;
	array[1] = 1;
	brray[0] = 1;
	brray[1] = 1;
	cin >> n;
	if(n == 1){
		cout << 1 << endl;
	}else if(n == 2){
		cout << 1 << endl;
		cout << 1 << ' ' << 1 << endl;
	}else{
		cout << 1 << endl;
		cout << 1 << ' ' << 1 << endl;
		for(int i = 2;i < n;i++){
			int j;
			for(j = 1;j < i;j++){
				brray[j] = array[j-1] + array[j];
			}	
			brray[j] = 1;
			for(j = 0;j <= i;j++){
				cout << brray[j] << ' ';
			}
			cout << endl;
			for(j = 0;j <= i;j++){
				array[j] = brray[j];
			}
		}
	}
	return 0;
}