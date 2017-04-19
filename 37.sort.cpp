#include <iostream>
#include <algorithm>

using namespace std;

bool com(int a,int b){
 return a>b;
}

int main(int argc, char *argv[]) {
	int a[4];
	cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3,com);
	cout << a[0]<< ' ' << a[1]<< ' ' << a[2] << endl;
	return 0;
}