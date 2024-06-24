#include <bits/stdc++.h>
using namespace std;
long long X[1001];
char xaunhiphan(long long n, long long k) {
	if(n == 1) return '0';
	if(n == 2) return '1';
	if(k <= X[n-2]) return xaunhiphan(n-2, k);
	else return xaunhiphan(n-1,k - X[n-2]); 
} 

int main () {
	int t;
	cin>> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		X[1] = X[2] = 1;
		for(int i = 3; i <= 101; i++) {
			X[i] = X[i-2] + X[i-1]; 
		}
		cout << xaunhiphan(n,k) << endl;
	}
}
