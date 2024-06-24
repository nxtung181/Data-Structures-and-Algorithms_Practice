#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, kq = 0, f[1001];
		cin >> n;
		string s;
		cin >> s;
		for(int i = 0; i < n; i++) {
			f[i] = 0;
			for(int j = 0; j < i; j++) {
				if(s[i] == s[j]) {
					if(j == i) f[i] = 0;
					else f[i] = max(f[i], f[j] + 1);
				}
			}
			kq = max(kq, f[i]);
		}
		cout << kq << endl;
	}
}
