#include <bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
int n, e;
void DFS(int u) {
	chuaxet[u] = false;
	for(int v : List[u]) {
		if(chuaxet[v]) {
			DFS(v);
		}
	}
}
void canhcau() {
	int i, j, k, u;
	for(int i = 1; i <= n; i++) {
		for(u = 0; u < List[i].size(); u++) {
			j = List[i][u];
			List[i].erase(List[i].begin() + u);
			DFS(i);
			bool check = false;
			for(k = 1; k <= n; k++) {
				if(chuaxet[k]) check = true;
			}
			if(check && i < j) cout << i << " " << j << " ";
			List[i].insert(List[i].begin()+u, j);
			memset(chuaxet, true, sizeof(chuaxet));
		}
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0; i < 1005; i++) List[i].clear();
		cin >> n >> e;
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		canhcau();
		cout << endl;
	}
}
