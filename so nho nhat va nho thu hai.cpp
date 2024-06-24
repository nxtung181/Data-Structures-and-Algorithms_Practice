#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		set<int> s;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		vector<int> v(s.begin(), s.end());
		if(v.size() == 1) {
			cout << -1 << endl;
		} else {
			cout << v[0] << " " << v[1] << endl;
		}
	}
}
