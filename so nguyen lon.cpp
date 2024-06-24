#include <bits/stdc++.h>
using namespace std;
int F[1005][1005];
int qhd(string s1, string s2) {
	int res = 0;
	memset(F, 0, sizeof(F));
	for(int i = 1; i <= s1.size(); i++) {
		for(int j = 1; j <= s2.size(); j++) {
			if(s1[i-1] == s2[j-1]) {
				F[i][j] = F[i-1][j-1] + 1;
			} else {
				F[i][j] = max(F[i-1][j], F[i][j-1]);
			}
		}
	}
	return F[s1.size()][s2.size()];
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		string n, m;
		cin >> n >> m;
		cout << qhd(n,m) << endl;
	}
}
