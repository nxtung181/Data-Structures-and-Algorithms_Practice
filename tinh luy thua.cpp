#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1e9 + 7;
long long power(long long n, long long k) {
	if(k == 0) return 1;
	long long x = power(n,k/2);
	if(k % 2 == 0) return x*x%mod;
	else return n*(x*x%mod)%mod;
}

int main () {
	int t = 20;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		if(n == 0 && k == 0) return 0;
		cout << power(n,k) << endl;
	}
}
