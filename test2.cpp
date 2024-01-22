#include <iostream>
using namespace std;

int giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giaithua(n - 1);
    }
}

int solve(int n, int k) {
    //dung cong thuc to hop
    return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

int main() {
	int t; 
    cin >> t; 
    while(t--){
		int T;
    	int M;
    	cin >> T >> M;
        int result = solve(T + M, T);
    	cout << result<< endl;
    }
}
