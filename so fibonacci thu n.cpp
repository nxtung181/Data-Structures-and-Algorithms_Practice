#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
struct matran{
	long long f[2][2] = {
		{1,1},
		{1,0}
	};
};

matran operator*(matran a, matran b) {
	matran c;
	for(int i = 0 ; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			c.f[i][j] = 0;
			for(int k = 0; k < 2; k++) {
				c.f[i][j] = (c.f[i][j] + a.f[i][k]*b.f[k][j]%mod)%mod;
			}
		}
	}
	return c;
}

matran power(matran a, int n) {
	if(n==1) return a;
	matran x = power(a, n/2);
	if(n%2 ==0) return x*x;
	return a*x*x;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		matran a;
		matran res = power(a,n);
		cout << res.f[1][0] << endl;
	}
}

