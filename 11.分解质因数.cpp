#include <iostream>
#include <cmath>

using namespace std;

int prime[3000] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109 ,113, 127, 131 ,137 ,139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227 ,229, 233 ,239, 241 ,251 ,257, 263, 269, 271, 277, 281, 283, 293, 307 ,311 ,313 ,317, 331, 337, 347 ,349, 353, 359, 367 ,373, 379 ,383 ,389 ,397 ,401 ,409 ,419, 421 ,431 ,433, 439, 443 ,449 ,457, 461, 463 ,467 ,479 ,487 ,491, 499 ,503 ,509 ,521 ,523, 541, 547 ,557 ,563 ,569 ,571 ,577 ,587 ,593 ,599, 601, 607, 613, 617, 619 ,631, 641, 643, 647 ,653, 659 ,661, 673 ,677 ,683 ,691 ,701 ,709 ,719 ,727, 733 ,739 ,743 ,751 ,757 ,761 ,769 ,773 ,787 ,797 ,809 ,811 ,821, 823 ,827, 829, 839 ,853, 857 ,859, 863, 877, 881 ,883, 887 ,907 ,911 ,919 ,929 ,937 ,941, 947 ,953, 967 ,971 ,977, 983 ,991 ,997 ,1009 ,1013 ,1019 ,1021 ,1031 ,1033 ,1039 ,1049 ,1051 ,1061 ,1063 ,1069 ,1087 ,1091 ,1093 ,1097 ,1103, 1109 ,1117 };

int findFirst(int test){
	int miao = 0;
	while(prime[miao] <= sqrt(test)){
		if(test % prime[miao] == 0){
			return prime[miao];
		}else{
			miao ++;
		}
	}
	return test;
}

int main(int argc, char *argv[]) {
	int a , b;
	cin >> a >> b;
	int count;
	for(int i = a; i <= b; i++){
		int alice = i;
		count = 0;
		cout << alice << "=";
		int first = findFirst(i);
		cout << first;
		if(first == alice){
			cout << endl;
			continue;
		}
		alice /= first;
		int divide = prime[count];
		while(divide <= sqrt(alice)){
			if(alice % divide == 0){
				cout << "*" << divide;
				alice /= divide;
			}else{
				divide = prime[count++];
			}
		}
		if(divide >= sqrt(alice)){
			cout << "*" << alice;
		}
		cout << endl;
	}
	return 0;
}