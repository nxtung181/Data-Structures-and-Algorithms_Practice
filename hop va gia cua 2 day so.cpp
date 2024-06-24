#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> s,x,y;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			s.insert(a[i]);
			x.insert(a[i]);
		}
		for(int i = 0 ; i < m; i++) {
			cin >> b[i];
			s.insert(b[i]);
			y.insert(b[i]);
		}
		for(auto x : s) {
			cout << x << " ";
		}
		cout << endl;
		for(auto k : x) {
			if(y.count(k) != 0) {
				cout << k << " ";
			}
		}
		cout << endl;
		
	}
}
