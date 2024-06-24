#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int d, max1 = 0; int a[127] = {};
		cin >> d;
		string s;
		cin >> s;
		for(char i : s) {
			a[i]++;
			max1 = max(max1, a[i]);
		}
		if(max1 <= s.length()/d + 1) cout << 1 << endl;
		else cout << -1 << endl;
	}
}
