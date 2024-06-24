#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		set<int> v;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			while(a[i] > 0) {
				int k = a[i]%10;
				v.insert(k);
				a[i]/=10;
			}
		}
		for(auto i : v) {
			cout << i << " ";
		}
		cout << endl;
	}
}
