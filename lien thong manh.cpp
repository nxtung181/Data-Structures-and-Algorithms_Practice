#include <bits/stdc++.h>
using namespace std;
vector<int> List[10005];
int cnt = 1, ans = 0;
int dis[10005] = {}, low[10005] = {};
stack<int> st;
void DFS(int u) {
	dis[u] = low[u] = cnt++;
	st.push(u);
	for(int &i : List[u]) {
		if(dis[i]) {
			low[u] = min(low[u], dis[u]);
		} else {
			DFS(i);
			low[u] = min(low[u], low[i]);
		}
	}
	if(dis[u] == low[u]) {
		++ans;
		int i = st.top();
		st.pop();
		dis[i] = low[i] = 1e9;
		while(i != u) {
			i = st.top();
			st.pop();
			dis[i] = low[i] = 1e9;
		}
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		for(int i = 0; i < 10005; i++) {
			List[i].clear();
		}
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		ans = 0;
		for(int i = 1; i <= n; i++) {
			if(!dis[i]) {
			DFS(i);
		}
	}
	cout << ans << endl;
}
}


