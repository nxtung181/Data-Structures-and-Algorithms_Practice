#include <bits/stdc++.h>
using namespace std;
int xuly(string s) {
	int dem = 0;
	stack<char> st;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '(') {
			st.push(s[i]);
		} else { 
			if(!st.empty()) {
				st.pop();
				dem+=2;
			}
		}
	}
	return dem;
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << xuly(s) << endl;
	}
}
