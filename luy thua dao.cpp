#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
long long power(long long n, long long k) {
	if(k == 0) return 1;
	long long x = power(n, k / 2);
	if(k % 2 == 0) {
		return x*x%M;
	} else {
		return n*(x*x%M)%M;
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long m = n;
		long long tmp = 0;
		while(m != 0) {
			tmp = tmp*10 + m%10;
			m/=10;
		}
		cout << power(n,tmp) << endl;
	}
}
