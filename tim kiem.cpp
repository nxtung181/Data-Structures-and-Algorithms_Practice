#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		bool dd[1000001];
		memset(dd, false, sizeof(dd));
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			dd[a[i]] = true;
		}
		if(dd[x] == true) {
			cout << 1 << endl;
		} else {
			cout << -1 << endl;
		}
	}
}
