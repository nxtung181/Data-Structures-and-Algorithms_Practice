#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int n;
struct matran{
	long long f[10][10];
};

matran operator*(matran a, matran b) {
	matran c;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <n; j++) {
			c.f[i][j] = 0;
			for(int k = 0; k < n; k++) {
				c.f[i][j] = (c.f[i][j] + a.f[i][k]*b.f[k][j]%mod)%mod;
			}
		}
	}
	return c;
}

matran power(matran a, int k) {
	if(k == 1) return a;
	matran x = power(a, k/2);
	if(k % 2 == 0) return x*x;
	return a*x*x;
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		long long k;
		cin >> n >> k;
		matran a;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a.f[i][j];
			}
		}
		a = power(a,k);
		long long sum = 0;
		for(int i = 0; i < n; i++) {
			sum = (sum + a.f[i][n-1])%mod;
		}
		cout << sum << endl;
	}
}

