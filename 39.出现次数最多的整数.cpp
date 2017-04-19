#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	if(n <= 0){
		return 0;
	}
	int one = 0,two = 18372910;
	int cnt = 1;
	int max = 0,maxone = 0;
	for(int i = 0;i < n;i++){
		cin >> one;
		if(i == 0){
			maxone = one;
		}
		if(one == two){
			cnt++;
			if(cnt > max){
				max = cnt;
				maxone = one;
			}
		}else{
			cnt = 1;
		}
		two = one;
	}
	cout << maxone;
}