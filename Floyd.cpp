#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, m, u, v, w, t;
	cin >> n >> m;
	int D[1005][1005];
	while(m--) {
		cin >> u >> v >> w;
		D[u][v] = D[v][u] = w; 
		
	}
	for(int k = 1; k <= n; k++) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				if(D[i][j] > D[i][k] + D[k][j])
					D[i][j] = D[i][k] + D[k][j];
			}
		}
	}
	cin >> t;
	while(t--) {
		cin >> u >> v;
		cout << D[u][v] << endl;
	}
}
