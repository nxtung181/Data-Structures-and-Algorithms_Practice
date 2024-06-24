#include <bits/stdc++.h>
using namespace std;
int F[1005][1005];
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, m, ans = 0;
		cin >> n >> m;
		int a[n+1][m+1];
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				if(a[i][j]) {
					F[i][j] = min(F[i-1][j] + 1, min(F[i-1][j-1]+1, F[i][j-1]+1));
				} else {
					F[i][j] = 0;
				}
				ans = max(ans, F[i][j]);
			}
		}
		cout << ans << endl;
	}
}
