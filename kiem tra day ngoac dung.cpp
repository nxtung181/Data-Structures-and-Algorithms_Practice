#include <bits/stdc++.h>
using namespace std;
int kt(string s) {
	stack<char> st;
	int n = s.length();
	for(int i = 0; i < n; i++) {
		if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
			st.push(s[i]);
		} else {
			if(st.empty()) return 0;
			char t = st.top();
			if(t == '(' && s[i] == ')') st.pop();
			else if(t == '[' && s[i] == ']') st.pop();
			else if(t == '{' && s[i] == '}') st.pop();
		}
	}
	return st.empty();
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(kt(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
} 
