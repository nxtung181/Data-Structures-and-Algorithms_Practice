#include <bits/stdc++.h>
using namespace std;
int n, m, ans, parent[100001], num[100001];

void Init() {
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
		num[i] = 1;
	} 
}

int Find(int v) {
	if(v != parent[v]) {
		parent[v] = Find(parent[v]);
	}
	return parent[v];
}

void Union(int u, int v) {
	int a = Find(u);
	int b = Find(v);
	if(a == b) return;
	if(num[a] < num[b]) swap(a,b);
	parent[b]=a;
	num[a]+= num[b];
	ans  = max(ans, num[a]);
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		ans = 0;
		for(int i = 1; i <= m; i++) {
			int u, v;
			cin >> u >> v;
			Union(u,v);
		}
		if(ans == n) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

