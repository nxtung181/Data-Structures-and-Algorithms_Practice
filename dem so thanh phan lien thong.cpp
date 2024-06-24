#include <bits/stdc++.h>
using namespace std;
int dem, n, m;
vector<int> List[1005];
bool chuaxet[1005];
void DFS(int u) {
	chuaxet[u] = false;
	for(int v : List[u]) {
		if(chuaxet[v]) {
			DFS(v);
		}
	}
}

void stplt() {
	dem = 0;
	for(int i = 1; i <= n; i++) {
		if(chuaxet[i]) {
			dem++;
			DFS(i);
		}
	}
	cout << dem << endl; 
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0; i < 1005; i++) List[i].clear();
		cin >> n >> m;
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		stplt();
	}
}
