#include <iostream>
#include <set>

using namespace std;

multiset<int> huffman;

int main(int argc, char *argv[]) {
	int n,temp;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> temp;
		huffman.insert(temp);
	}
	int cost = 0;
	int add = 0;
	while(huffman.size() >= 2){
		multiset<int>::iterator it = huffman.begin();
		add = *it;
		huffman.erase(it);
		it = huffman.begin();
		add += *it;
		huffman.erase(it);
		huffman.insert(add);
		cost += add;
		add = 0;
	}
	cout << cost << endl;
	return 0;
}