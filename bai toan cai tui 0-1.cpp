#include <bits/stdc++.h>
using namespace std;
int F[1005][1005];
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, v;
		cin >> n >> v;
		int a[n], c[n];
		memset(F, 0, sizeof(F));
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++) {
			cin >> c[i];
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= v; j++) {
				if(j >= a[i]) {
					F[i][j] = max(F[i-1][j], F[i-1][j-a[i]] + c[i]);
				} else {
					F[i][j] = F[i-1][j];
				} 
			}
		}
		cout << F[n][v] << endl;
	}
}
