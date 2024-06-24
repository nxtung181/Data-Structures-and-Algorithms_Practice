#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long a[n], max =0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i < n; i++) {
			max = (max + a[i]*i)%mod;
		}
		cout << max << endl;
	}
}
