#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int sum;
	cin >> sum;
	int ge,shi,bai,qian,wan,shiwan;
	for(int i = 10000;i<=99999;i++){
		wan = i / 10000;
		qian = (i % 10000 )/ 1000;
		bai = i % 1000 / 100;
		shi = i % 100/ 10;
		ge = i % 10;
		if(ge == wan && shi==qian && ge+shi+bai+qian+wan == sum){
			cout << i << endl;
		}
	}
	for(int i = 100000;i<=999999;i++){
		shiwan = i / 100000;
		wan = i % 100000 / 10000;
		qian = i % 10000 / 1000;
		bai = i % 1000 / 100;
		shi = i % 100/ 10;
		ge = i % 10;
		if(ge == shiwan && shi==wan && bai == qian && ge+shi+bai+qian+wan+shiwan == sum){
			cout << i << endl;
		}
	}
	return 0;
}