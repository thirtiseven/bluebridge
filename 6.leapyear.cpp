#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	if((n%4==0&&n%100!=0)||n%400==0){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	return 0;
}