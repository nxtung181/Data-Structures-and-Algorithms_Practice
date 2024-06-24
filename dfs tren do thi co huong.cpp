#include <bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
void dfs(int u) {
	chuaxet[u] = false;
	cout << u << " ";
	for(int v : List[u]) {
		if(chuaxet[v]) {
			dfs(v);
		}
	}	
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0; i < 1005; i++) List[i].clear();
		int v, e, u;
		cin >> v >> e >> u;
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		dfs(u);
		cout << endl;
	}
}

