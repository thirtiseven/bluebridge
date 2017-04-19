#include <iostream>
#include <cctype>
#include <string>
#include <string.h>


using namespace std;

char alice[2000];
char blues[2000];

int same(){
	for(int i = 0;i < strlen(alice);i++){
		if(alice[i] != blues[i]){
			return -1;
		}
	}
	return 1;
}

int sososame(){
	for(int i = 0;i < strlen(alice);i++){
			if(tolower(alice[i]) != tolower(blues[i])){
			return -1;
		}
	}
	return 1;
}

int judge(){
	if(strlen(alice) != strlen(blues)){
		return 1;
	}else if(same() == 1){
		return 2;
	}else if(sososame() == 1){
		return 3;
	}else{
		return 4;
	}
}

int main(int argc, char *argv[]) {
	cin >> alice >> blues;
	cout << judge() << endl;
	return 0;
}