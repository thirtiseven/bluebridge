#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int m, n;
	string s;
		cin>>n;

		s = "";
		if (n == 0)
			s = "0";

		while (n != 0)
		{
			if (n%16 >9 )
				s += n%16 - 10 +'A';
			else
				s += n%16 + '0';
			n = n / 16;
		}

		reverse(s.begin(), s.end());//反转
		cout<<s<<endl;

	return 0;
}