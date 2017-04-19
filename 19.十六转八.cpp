#include <iostream>  
#include <string>  
#include <cmath>  
using namespace std;  
  
int main(int argc, char *argv[]) {  
	int n=0;  
	cin>> n;  
		  
	string* Hex = new string[n];  
	string tmpOct;  
	string* Oct = new string[n];  
	  
	for(int i=0;i<n;i++)  
	{  
		int CurBit = 0;  
		cin>>Hex[i];  
		  
		tmpOct = "";  
		Oct[i] = "";  
		  
		for(int j=Hex[i].size()-3;j>=0;j-=3)  
		{  
			int d = 0;  
			for(int k=0;k<3;k++)  
			{  
				int t = j+k;   
				if(Hex[i][t]>='0' && Hex[i][t]<='9')  
				{  
					CurBit = Hex[i][t]-'0';  
				}  
				if(Hex[i][t]>='A' && Hex[i][t]<='F')  
				{  
					CurBit = Hex[i][t]-'A'+10;    
				}  
				  
				d = d * 16 + CurBit;  
			}  
			    
			int base = 7; 
			for(int k=0;k<4;k++)  
			{  
				tmpOct += (char)('0' + (d & base));  
				d = d >> 3;  
			}  
			d = 0;  
		}   
		   
		int rest = Hex[i].size() % 3;  
		if(rest != 0)  
		{  
			int d = 0;  
			for(int k=0;k<rest;k++)  
			{   
				if(Hex[i][k]>='0' && Hex[i][k]<='9')  
				{  
					CurBit = Hex[i][k]-'0';  
				}  
				if(Hex[i][k]>='A' && Hex[i][k]<='F')  
				{  
					CurBit = Hex[i][k]-'A'+10;    
				}  
				  
				d = d * 16 + CurBit;  
			}  
			  
			int base = 7;  
			int max = ceil(4.0 / 3.0 * rest);   
			for(int k=0;k<max;k++)  
			{  
				if(((k==max-1) && (d & base)!=0) || k<max-1)  
					tmpOct += char('0' + (d & base));  
				d = d >> 3;  
			}  
		}  
		  
		int j=tmpOct.size()-1;   
		for(;j>=0;j--)  
		{  
			Oct[i] += tmpOct[j];  
		}  
	}  
	  
	for(int i=0;i<n;i++)  
	{  
		cout<<Oct[i]<<endl;  
	}  
	  
	cin>>n;  
	return 0;  
} 