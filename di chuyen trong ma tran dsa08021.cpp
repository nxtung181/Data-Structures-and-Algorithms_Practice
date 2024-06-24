#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int m, n, a[1001][1001];
		cin >> m >> n;
		for(int i = 1; i <= m; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		queue<pair<int,int>> q;
		q.push({1,1});
		int C[m][n] = {};
		C[1][1] = 0;
		while(!q.empty()) {
			pair<int, int> t = q.front();
			int i = t.first, j = t.second;
			q.pop();
			int x = a[i][j];
			if(C[i][j+x] == -1) {
				q.push({i, j + x});
				C[i][j+x] = C[i][j] + 1;
			}
			if(C[i+x][j] == -1) {
				q.push({i+x, j});
				C[i+x][j] == C[i][j] + 1;
			}
			if(C[m][n] != -1) break;
		}
		cout << C[m][n] << endl;
	}
}
