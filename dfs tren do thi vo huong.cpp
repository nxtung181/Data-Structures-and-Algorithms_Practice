#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<int> adj[1001];
bool visited[1001];
void input() {
	cin >> v >> e >> u;
	for(int i = 0; i < e; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 0; i < v; i++) {
		visited[i] = false;
	}
}
void dfs(int u) {
	cout << u << " ";
	visited[u] = true;
	for(int k : adj[u]) {
		if(visited[k] == false) {
			dfs(k);
		}	
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		input();
		dfs(u);
		cout << endl;
	}	
}
