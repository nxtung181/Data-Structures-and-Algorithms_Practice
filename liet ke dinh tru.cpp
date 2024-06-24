#include <bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
int v, e;
void DFS(int u) {
	chuaxet[u] = false;
	for(int v : List[u]) {
		if(chuaxet[v]) {
			DFS(v);
		}
	}
}

void dinhtru() {
	int i, u;
	for(u = 1; u <= v; u++) {
		chuaxet[u] = false;
		if(u == 1) DFS(2);
		else DFS(1);
		bool check = false;
		for(int i = 1; i <= v; i++) {
			if(chuaxet[i]) check = true;
		}
		if(check) cout << u << " ";
		memset(chuaxet, true, sizeof(chuaxet));
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0; i < 1005; i++) List[i].clear();
		cin >> v >> e;
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		dinhtru();
		cout << endl;
	}
}
