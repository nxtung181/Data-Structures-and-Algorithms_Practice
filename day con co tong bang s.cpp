#include <bits/stdc++.h>
using namespace std;
int a[1000], F[40005];
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, s;
		cin >> n >> s;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		memset(F, 0, sizeof(F));
		F[0] = 1;
		for(int i = 0; i < n; i++) {
			for(int j = s; j >= a[i]; j--) {
				if(F[j - a[i]] == 1) {
					F[j] = 1;
				}
			}
		}
		if(F[s] == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
