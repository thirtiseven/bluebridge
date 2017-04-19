#include <iostream>

using namespace std;
int n;
int d;

void a(int i){
	if(i < n){
		cout << "sin(" << i;
		if(i%2==0){
			cout << "+";
		}else{
			cout << "-";
		}	
		i++;
		a(i);
	}else if(i == n){
		cout << "sin(" << n;
	}
	cout << ")";
}

void A(int c){
	n = c;
	a(1);
}

void S(int a){
	if(a!=1){
	//}else{
		cout << "(";
		S(a-1);
		cout << ")";
	}
	A(a);
	cout << "+" << d-a+1;
}

int main(int argc, char *argv[]) {
	cin >> n;
	d = n;
	S(n);
	return 0;
}