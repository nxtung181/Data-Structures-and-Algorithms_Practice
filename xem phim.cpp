#include <bits/stdc++.h>
using namespace std;
int f[101][25000], a[101];
int main () {
	int c, n;
	cin >> c >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	memset(f, 0, sizeof(f));
	for(int i = 1; i <=n; i++) {
		for(int j = 1; j <= c; j++) {
			if(j >= a[i]) {
				f[i][j] = max(f[i-1][j], f[i-1][j-a[i]] + a[i]);
			} else {
				f[i][j] = f[i-1][j];
			}
		}
	}
	cout << f[n][c];
}
