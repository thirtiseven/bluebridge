#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	long long longarray[1001000];
	longarray[0] = 1;
	longarray[1] = 1;
	for(long long i = 2;i<1000000;i++){
		longarray[i] = (longarray[i - 1] + longarray[i - 2])%10007;
	}
	long long ago;
	cin >> ago;
	cout << longarray[ago-1];
	return 0;
}