#include <bits/stdc++.h>
using namespace std;
vector<int> List[1005];
int daxet[1005];
void BFS(int u) {
	queue<int> q;
	q.push(u);
	daxet[u] = 1;
	while(!q.empty()) {
		int x = q.front();
		cout << x << " ";
		q.pop();
		for(int i : List[x]) {
			if(!daxet[i]) {
				daxet[i] = 1;
				q.push(i);	
			}
		}
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		memset(daxet, 0, sizeof(daxet));
		for(int i = 0; i < 1005; i++) List[i].clear();
		int v, e, u;
		cin >> v >> e >> u;
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		BFS(u);
		cout << endl;
	}
}
