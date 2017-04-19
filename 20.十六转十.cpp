#include <iostream>
#include <cstdio>  
#include <cstring>  
#include <cmath>  
using namespace std;
  
int main(int argc, char *argv[]){  
	char strHex[100];  
	unsigned int i = 0, len = 0, temp = 0;  
	unsigned int nDec = 0;  
	cin >> strHex;  
	len = strlen(strHex);  
	for (i = 0; i < len; i++){  
		switch(strHex[i]){  
		case 'A': temp = 10; break;  
		case 'B': temp = 11; break;  
		case 'C': temp = 12; break;  
		case 'D': temp = 13; break;  
		case 'E': temp = 14; break;  
		case 'F': temp = 15; break;  
		default: temp = strHex[i]-'0'; break;  
		}  
		nDec += (temp*pow(16,len-1-i));  
	}  
	cout << nDec ;  
	return 0;  
}