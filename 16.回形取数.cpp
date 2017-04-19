#include <iostream>

#define BUGNUM -100

using namespace std;

int squ[300][300] = {0};
int m,n;
int Xlocation = 0, Ylocation = 0;
int option1 = 1 , option2 = 2,option;


void down(){
	int that = squ[Xlocation + 1][Ylocation];
	if(that != BUGNUM){
		cout << ' '  << that;
	}
	squ[Xlocation + 1][Ylocation] = BUGNUM;
	Xlocation ++;
	option1 = 1 , option2 = 2;
}

void right(){
	int that = squ[Xlocation][Ylocation + 1];
	if(that != BUGNUM){
		cout << ' '  << that;
	}
	squ[Xlocation][Ylocation + 1] = BUGNUM;
	Ylocation ++;
	option1 = 2 , option2 = 3;
}

void up(){
	int that = squ[Xlocation - 1][Ylocation];
	if(that != BUGNUM && Xlocation >= 1){
		cout << ' ' << that;
	}
	squ[Xlocation - 1][Ylocation] = BUGNUM;
	Xlocation --;
	option1 = 3 , option2 = 4;
}

void left(){
	int that = squ[Xlocation][Ylocation - 1];
	if(that != BUGNUM){
		cout << ' '  << that;
	}
	squ[Xlocation][Ylocation - 1] = BUGNUM;
	Ylocation --;
	option1 = 4 , option2 = 1;
}

void DO(int option){
	if(option == 1){
		down();
	}else if(option == 2){
		right();
	}else if(option == 3){
		up();
	}else if(option == 4){
		left();
	}
}

void move(int x,int y){
	if(option1 == 1){
		if(x <= m && squ[x+1][y] != BUGNUM){
			down();
		}else{
			DO(option2);
		}
	}else if(option1 == 2){
		if(squ[x][y+1] != BUGNUM){
			right();
		}else{
			DO(option2);
		}
	}else if(option1 == 3){
		if(squ[x-1][y] != BUGNUM && (x>=1)){
			up();
		}else{
			DO(option2);
		}
	}else if(option1 == 4){
		if(squ[x][y-1] != BUGNUM){
			left();
		}else{
			DO(option2);
		}
	}
}


int main(int argc, char *argv[]) {
	for(int i = 0;i < 300;i++){
		for(int j = 0;j < 300;j++){
			squ[i][j] = BUGNUM;
		}
	}
	cin >> m >> n;
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cin >> squ[i][j];
		}
	}
	if(m == 1){
		option1 = 2;
	}
	cout << squ[0][0];
	squ[0][0] = BUGNUM;
	for(int i = 1; i < m * n; i++){
		move(Xlocation , Ylocation);
	}
	return 0;
}