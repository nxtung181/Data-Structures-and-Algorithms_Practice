#include <bits/stdc++.h>
using namespace std;
struct so{
	int dau, cp;
};
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		so a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i].dau >> a[i].cp;
		}
		long long F[n][2];
		F[0][1] = a[0].cp;
		F[0][0] = 0;
		for(int i = 1; i < n; i++) {
			if(a[i].dau == a[i-1].dau) {
				F[i][1] = min(F[i-1][0], F[i-1][1]) + a[i].cp;
				F[i][0] = F[i-1][1];
			} else {
				F[i][0] = min(F[i-1][0], F[i-1][1]);
				F[i][1] = min(F[i-1][0], F[i-1][1]) + a[i].cp;
			}
		}
		cout << min(F[n-1][0], F[n-1][1]) << endl;
	}
}
