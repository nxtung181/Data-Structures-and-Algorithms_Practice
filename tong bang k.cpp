#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, k, F[1005], a[1005];
		cin >> n >> k;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		memset(F, 0, sizeof(F));
		F[0] = 1;
		for(int i = 1; i <= k; i++) {
			for(int j = 0; j < n; j++) {
				if(i >= a[j]) {
					F[i] = (F[i] + F[i-a[j]])%mod;
				}
			}
		}
		cout << F[k] << endl;
	}
}
