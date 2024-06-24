#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		map<int,int> giao, hop;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			hop.insert(a[i],i);
			giao[a[i]]++;
		}		
		for(int i = 0; i < n; i++) {
			cin >> b[i];
			hop.insert(b[i], i);
			giao[b[i]]++;
		}
		for(auto x : hop) {
			cout << x.first << " ";
		}
		cout << endl;
		for(auto x : giao) {
			if(giao[x.first] > 0) {
				cout << x.first << " ";
			}
		}
		cout << endl;
	}
}
