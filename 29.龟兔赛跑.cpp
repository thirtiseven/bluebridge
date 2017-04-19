#include <iostream>
#include <algorithm>


using namespace std;

int v1 , v2, t, s, l;
int change = 0;
int thattime = 0;
int rabitx = 0;
int lastr = 0;
int wtoto,wrabit;

int toto(int time){
	return time * v2;
}

int rabit(int time){
//	cout << " 数据" << lastr << ' ' << change << endl;
	if(time == 0){
		return 0;
	}
	rabitx += v1;
	if(time == 1){
		lastr = v1;
		return v1;
	}
	if(lastr + v2 - toto(time) >= t && change == 0){
		thattime = time;
		change = 1;
	}
	if(time < thattime + s && time >= thattime && change == 1){
		rabitx -= v1;
		lastr = rabitx;
		return rabitx;
	}
	change = 0;
	lastr = rabitx;
	return rabitx;
}

int main(int argc, char *argv[]) {
	cin >> v1 >> v2 >> t >> s >> l;
	int time;
	int i = 0;
	while(1){
		i++;
//		cout << "循环中 toto:" << toto(i) << " rabit" << rabit(i) << endl;
		wtoto = toto(i);
		wrabit = rabit(i);
		if(max(wtoto,wrabit) >= l){
			break;
		}
	}
	if(wtoto == wrabit){
		cout << "D" << endl;
	}else if(wtoto > wrabit){
		cout << "T" << endl;
	}else if(wrabit > wtoto){
		cout << "R" << endl;
	}
//	cout << wtoto << ' ' << wrabit << endl;
	cout << i << endl;
	return 0;
}