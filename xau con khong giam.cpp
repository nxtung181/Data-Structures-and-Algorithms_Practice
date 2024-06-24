#include <bits/stdc++.h>
using namespace std;
int main () {
	string s;
	cin >> s;
	int kq = 0, f[1001];
	for(int i = 0; i < s.size(); i++) {
		f[i]= 1;
		for(int j = 0; j < i; j++) {
			if((s[j] - 'A') <= (s[i] - 'A')) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
		kq = max(kq, f[i]);
	}
	cout << kq;	
}
