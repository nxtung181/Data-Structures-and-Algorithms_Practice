#include <bits/stdc++.h>
using namespace std;
int F[5005][5005];
int main () {
	int n, M;
	cin >> n >> M;
	int x[n], y[n];
	for(int i = 1; i <= n; i++) {
		cin >> x[i] >> y[i]; 
	}
	memset(F, 0, sizeof(F));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= M; j++) {
			if(j >= x[i]) {
				F[i][j] = max(F[i-1][j], F[i-1][j-x[i]] + y[i]);
			} else {
				F[i][j] = F[i-1][j];
			}
		}
	}
	cout << F[n][M];
}
