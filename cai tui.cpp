#include <bits/stdc++.h>
using namespace std;
int f[1005][1005];
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, v;
		cin >> n >> v;
		int a[n+5], c[n+5];
		for(int i = 1; i <= n; i++) {
			cin >> a[i];  //the tich
		}
		for(int i = 1; i <= n; i++) {
			cin >> c[i]; //gia tri
		}
		memset(f,0, sizeof(f));
		for(int i = 1; i <=n; i++) {
			for(int j = 1; j <= v; j++) {
				if(j >= a[i]) {
					f[i][j] = max(f[i-1][j], f[i-1][j-a[i]] + c[i]);
				} else {
					f[i][j] = f[i-1][j];
				}
			}
		}
		cout << f[n][v] << endl;
	}
}
