#include <iostream>

using namespace std;

void fun(int n){
	if(n==1){
		cout << "A";
	}else{
		fun(n-1);
		cout << (char)(n+64);
		fun(n-1);
	}
}

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	fun(n);
	cout << endl;
	return 0;
}