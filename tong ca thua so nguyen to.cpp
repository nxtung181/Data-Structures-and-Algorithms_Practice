#include <bits/stdc++.h>
using namespace std;
int tsnt(int n) {
	int k;
	for(int i = 2;i <= n; i++) {
		k = 0;
		if(n % i == 0) {
			while(n% i == 0) {
				n/=i;
			}
			k = max(k, i);
		}
	}
	return k;
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		int l, r;
		cin >> l >> r;
		long long sum = 0;
		for(int i = l; i <= r; i++) {
			sum += tsnt(i);
		}
		cout << sum <<endl;
	}
}
