#include <bits/stdc++.h>
using namespace std;

int kt(string &s) {
	stack<char> st;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '(' || s[i] == '[') {
			st.push(s[i]);
		}
		if(s[i] == ')') {
			if(st.size() && st.top() == '(') {
				st.pop();	
			} else {
				return 0;
			}
		} else if(s[i] == ']') {
			if(st.size() && st.top() == '[') {
				st.pop();
			} else {
				return 0;
			}
		}
	}
	if(st.empty()) return 1;
	return 0;
}

int main () {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		if(kt(s)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
