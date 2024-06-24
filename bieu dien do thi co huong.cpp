#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		vector<int> List[1005];
		int v, e;
		cin >> v >> e;
		for(int i = 1;i <= e; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		for(int i = 1; i <= v; i++) {
			cout << i << ": ";
			for(int v : List[i]) {
				cout << v << " ";
			}
			cout << endl;
		}
	}
}
