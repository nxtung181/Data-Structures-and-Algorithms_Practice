#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1001];
bool visited[1001];

void bfs(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()) {
		int v = q.front(); //LAY DINH O DAU HANG DOI
		q.pop();   //xoa ra khoi hang doi
		cout << v << " ";
		for(int x : adj[v]) {
			if(visited[x] == false)
			q.push(x);
			visited[x] = true;
		}
	}
}

int main () {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	bfs(1);
}
