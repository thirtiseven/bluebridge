#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	string startnumber[25] = {"","","er ","san ","si ","wu ","liu ","qi ","ba ","jiu ","shi "};
	string othernumber[25] = {"","yi ","er ","san ","si ","wu ","liu ","qi ","ba ","jiu ","shi "};
	string number[25] = {"ling ","yi ","er ","san ","si ","wu ","liu ","qi ","ba ","jiu ","shi "};
	long long thatNumber;
	cin >> thatNumber;
	long long bob;
	int ling = 0,wanling = 0;
	if(((thatNumber-thatNumber%10) % 100 == 0)&&thatNumber>=100){
		ling = 1;
	}
	if(((thatNumber-thatNumber%100) % 10000 == 0)&&thatNumber%100!=0&&ling!=1){
		wanling = 1;
	}
	int start = 0;
	if(thatNumber / 1000000000){
		cout << startnumber[thatNumber / 1000000000] << "shi ";
		start = 1;
		thatNumber %= 1000000000;
	}
	if(thatNumber / 100000000 || start){
		cout << othernumber[thatNumber / 100000000] << "yi ";	
		start = 1;
		thatNumber %= 100000000;
	}
	if(thatNumber / 10000000){
		cout << othernumber[thatNumber / 10000000] << "qian ";	
		start = 1;
		thatNumber %= 10000000;
	}
	if(thatNumber / 1000000){
		cout << othernumber[thatNumber / 1000000] << "bai ";	
		start = 1;
		thatNumber %= 1000000;
	}
	if(thatNumber / 100000){
		if(start){
		cout << othernumber[thatNumber / 100000] << "shi ";
		}else{
		cout << startnumber[thatNumber / 100000] << "shi ";	
		}
		start = 1;
		thatNumber %= 100000;
	}
	if(thatNumber / 10000 || start){
		if(wanling == 0){
			cout << othernumber[thatNumber / 10000] << "wan ";	
		}else{
			cout << othernumber[thatNumber / 10000] << "wan ling ";
		}
		start = 1;
		thatNumber %= 10000;
	}
	if(thatNumber / 1000){
		cout << othernumber[thatNumber / 1000] << "qian ";	
		start = 1;
		thatNumber %= 1000;
	}
	if(thatNumber / 100){
		cout << othernumber[thatNumber / 100] << "bai ";
		start = 1;
		thatNumber %= 100;
	}
	if(thatNumber / 10){
		if(start){
		cout << othernumber[thatNumber / 10] << "shi ";
		}else{
		cout << startnumber[thatNumber / 10] << "shi ";	
		}
		start = 1;
		thatNumber %= 10;
	}
	if(thatNumber%10){
		string cart = ((ling == 1)?("ling "):(""));
		cout << cart << number[thatNumber%10] << endl;
	}	
	return 0;
}