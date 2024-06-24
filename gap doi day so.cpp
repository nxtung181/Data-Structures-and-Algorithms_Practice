#include <bits/stdc++.h>
using namespace std;
long long power(long long n, long long k) {
	if(k == 0) return 1;
	long long x = power(n, k /2);
	if(k%2==0) {
		return x*x;
	} else {
		return n*x*x;
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		long long mid = power(2, n - 1);
		while(1) {
			if(k == 1) {
				cout << 1;
				break;
			}
			if(k == mid) {
				cout << n;
				break;
			}
			if(k>mid) {
				k = mid - (k-mid);	
			}
			n--;
			mid/=2;
		}
		cout << endl;
	}
}
