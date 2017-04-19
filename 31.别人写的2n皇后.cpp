#include <iostream>    
#define N 100  
using namespace std;
int wq[N];           //whitequeen,黑皇后位置  
int bq[N];           //blackqueen,白皇后位置  
int cb[N][N];        //chessboard,棋盘  
int num;             //皇后数目  
int Xcount = 0;       //不同放置情况计数  

int bqueen(int pos)  //白色皇后放置  
{  
	int i;  
	for(i = 0; i < pos - 1; i++)  
	{  
		 //判断是否在同一行、同一列、同一对角线上面 ，由于i取不到pos-1，所以排除了在同一列的可能性   
		int judge = bq[i] - bq[pos-1];  
		if(0 == judge || judge == pos - 1 - i || -judge == pos - 1 - i)//pos - 1 - i表示列数之间的差距 。judge=0包含了同一行  
			return 0;  
	}  
	if(pos == num)  //如果白皇后也到了终点，就直接加1,返回。   
	{  
		Xcount++;  
	}  
  
	for(int i = 0; i < num; i++)  
	{  
		if(i != wq[pos] && cb[pos][i])  //棋盘上可以放皇后，但是又不和黑皇后处于同行   
		{  
			bq[pos] = i;  
			bqueen(pos+1);//递归   
		}  
	} 
	return 0; 
}  
int wqueen(int pos) //黑色皇后放置  
{  
	int i;  
	for(i = 0; i < pos -1; i++)  //注意for循环的初始化值也首先会判断符不符合循环条件，不符合就不执行循环操作   
	{  
	//判断是否在同一行、同一列、同一对角线上面 ，由于i取不到pos-1，所以排除了在同一列的可能性   
		int judge = wq[i] - wq[pos-1];//judge表示行数之间的差距   
		if(0 == judge || judge == pos - 1 - i || -judge == pos - 1 - i)//pos - 1 - i表示列数之间的差距 。judge=0包含了同一行  
			return 0;  
	}  
	if(pos == num)  //如果黑皇后放到了最后一行，即从头开始放白皇后   
	{  
		bqueen(0);  
		return 0;  
	}  
  
	for(int i = 0; i < num; i++)  
	{  
		if(cb[pos][i])  //如果棋盘上是1，即可以放置皇后   
		{  
			wq[pos] = i;    //先选一个方法放置，将第pos个皇后放置在第i行，其中pos表示列 ；   
			wqueen(pos+1);  //进行递归   
		}  
  
	}  
	return 0;
}  
int main(){  
	cin >> num;  
	for(int i =0; i < num; i++){  
		for(int j = 0; j < num; j++){ 
			cin>>cb[i][j];  
		}
	}
	wqueen(0);  
	cout<<Xcount;  
	return 0;  
}  