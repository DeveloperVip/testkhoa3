#include<bits/stdc++.h>
using namespace std;

int main(){
	int m, d, k, c;
	cin >> m >> d >> k >> c;
	int tmp = d; int money = 0;
	for(int i = 1; i <= m; i++){
		if(d <= 0){
			cout << -1;
			return 0;
		}
		if(d - k <= 0){
			d = tmp;
			money += c;
		}
		d -= k;
	}
	cout << money;
}