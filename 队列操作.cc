#include <iostream>
#include <queue>

int main(int argc, char *argv[]) {  
	std::queue<int> q;
	int n;
	std::cin >> n;
	while(n--) {
		int t;
		std::cin >> t;
		if (t == 1) {
			int a;
			std::cin >> a;
			q.push(a);
		} else if (t == 2) {
			if(q.empty()) {
				std::cout << "no\n";
				return 0;
			} 
			std::cout << q.front() << '\n';
			q.pop();
		} else if (t == 3) {
			std::cout << q.size() << '\n';
		}
	}
}