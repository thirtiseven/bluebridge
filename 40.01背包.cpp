#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char *argv[]) {
	int m,n,W[220],V[220],dp[220];
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> W[i] >> V[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = m;j>=W[i];j--){
			dp[j] = max(dp[j],dp[j-W[i]]+V[i]);
		}
	}
	cout << dp[m] << endl;
}