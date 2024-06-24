#include <bits/stdc++.h>
using namespace std;
int check(string s, int n) {
	int x  = 0;
	for(int i = 0; i < s.length(); i++) {
		x = (x*10 + (s[i] - '0')) % n;
	}
	if(x == 0) {
		return 1;
	}else {
		return 0;
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		queue<string> q;
		q.push("1");
		while(1) {
			string x = q.front();
			q.pop();
			if(check(x, n)) {
				cout << x << endl;
				break;
			}
			q.push(x + "0");
			q.push(x + "1");
		}
	}
}
