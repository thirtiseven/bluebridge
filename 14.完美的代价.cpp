#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
 int N;
 cin >> N;
 char s[8001] = {0};
 cin >> s;
  int b[26] = {0};
 for (int i = 0; i < N; i++)
	b[s[i] - 'a']++;
	 int odd = 0; 
 char charodd; 
 for (int i = 0; i < 26; i++)
	if (b[i] % 2 == 1) {
		odd++;
		charodd = i + 'a';
	}
 if (odd > 1)
	cout << "Impossible" << endl; 
 else{
	int change = 0; 
	for (int i = 0; i < N/2; i++){
	 	if (s[i] == charodd){
			int j = 0;
			for (j = i; j <= N-i-1; j++){
				if (s[j] == s[N-i-1]){
					break;
				}
			}
			change += j - i;
			for (int k = j; k > i; k--){
				s[k] = s[k-1];
			}
			s[i] = s[N-i-1]; 
		 }else{
			int j = 0;
			for (j = N-i-1; j >= i; j--){
				 if (s[j] == s[i]){
					break;
				}
			}
		change += N-i-1 - j;
		for (int k = j; k < N-i-1; k++){
			s[k] = s[k+1];
		}
		s[N-i-1] = s[i];
	 	}	
	}
	cout << change << endl; 
 }
 return 0;
}