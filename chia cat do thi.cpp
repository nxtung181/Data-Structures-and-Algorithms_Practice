#include <bits/stdc++.h>
using namespace std;
bitset<105> daxet;
vector<int> List[105];

void DFS(int u) {
	daxet[u] = 1;
	for(int &v : List[u]) {
		if(!daxet[v]) {
			DFS(v);
		}
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int k = 0;
		for(int i = 1; i <= n; i++) {
			if(!daxet[i]) {
				k++;
				DFS(i);
			}
		}
		int ans = 1e9;
		for(int i = 1; i <= n; i++) {
			int count = 0;
			daxet.reset();
			daxet[i] = 1;
			for(int j = 1; j <= n; j++) {
				if(!daxet[j]) {
					count++;
					DFS(j);
				}
			}
			if(count > k) {
				ans = i;
				k = count;
			}
		}
		if(ans == 1e9) {
			cout << 0 << endl;
		} else {
			cout << ans << endl;
		}
		for(int i = 1; i <= n; i++) {
			List[i].clear();
		}
		daxet.reset();
	}
}
