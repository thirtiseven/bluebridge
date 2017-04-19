#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstdio>  
 
using namespace std;  
int main()  
{  
	double x[4];  
	double y[4];    
	for(int i = 0; i < 4; i++)  
	scanf("%lf%lf", &x[i], &y[i]);  
	sort(x, x + 2);  
	sort(x + 2, x + 4);  
	sort(y , y + 2);  
	sort(y + 2, y + 4);  
	if(x[1] <= x[2] || x[0] >= x[3] || y[0] >= y[3] || y[1] <= y[2])  
	cout << "0.00" << endl;  
	else  
	{  
		sort(x, x + 4);  
		sort(y, y + 4);  
		cout << fixed << setprecision(2) << (x[2] - x[1]) * (y[2] - y[1]);  
	}     
		return 0;  
}  