#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, s, m;
		cin >> n >> s >> m;
		int result = 0;
		if(n < m || 6*(n-m) < m) {
			cout << -1 << endl;
		} else {
			int k = m *s;
			if(k % n== 0) {
				cout << k/n << endl;  
			} else {
				cout << k/n + 1 << endl;
			}
		}
	}
}
