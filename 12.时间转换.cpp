#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int everySecondCount;
	cin >> everySecondCount;
	cout << everySecondCount / 3600 << ":" << (everySecondCount - (everySecondCount / 3600 ) * 3600)/60 << ":" << everySecondCount % 60 << endl;
	return 0;
}