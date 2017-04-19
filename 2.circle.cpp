#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = acos(-1.0); 

int main(int argc, char *argv[]) {
	int r;
	cin >> r;
	cout << setprecision(7) << fixed << (double)(pi*r*r);
	return 0;
}