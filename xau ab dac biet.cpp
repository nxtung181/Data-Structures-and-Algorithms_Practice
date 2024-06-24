#include <bits/stdc++.h>
using namespace std;
int n, k, ok;
int a[100];
int solve(string s) {
	string z = "000";
	int t = s.find(z);
	if(t != - 1) {
		string k = s.substr(t + 1);
		if(k.find(z) == -1) {
			return 1;
		}
	return 0;
}
}
void sinh() {
	int j = n;
	while(j >= 1 && a[j] == 1) {
		a[j] = 0;
		j--;
	}
	if(j == 0) {
		ok = 0;
	} else {
		a[j] = 1;
	}
}
int main () {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
	ok = 1;
	while(ok) {
		string s = "";
		for(int i = 1; i <= n; i++) {
			s = s + to_string(a[i]);
		}
		if(solve(s) == 1) {
			for(int i = 0; i < n; i++) {
				cout << s[i];
			}
			cout << endl;
		}
		}
		sinh();
	}
