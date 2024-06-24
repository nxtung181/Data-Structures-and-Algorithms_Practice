#include <bits/stdc++.h>
using namespace std;
int tinhgt(int a, int b, char c) {
	if(c == '+') return a+b;
	if(c == '-') return a-b;
	if(c == '/') return a/b;
	if(c == '*') return a*b;	
}

int tinhhauto(string s) {
	stack<int> st;
	for(int i = 0; i < s.length(); i++) {
		if(isdigit(s[i]) ) {
			int n = s[i] - '0';
			st.push(n);
		} else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
			int a = st.top(); st.pop();
			int b = st.top(); st.pop();
			int x = tinhgt(b,a,s[i]);
			st.push(x);
		}
	}
	return st.top();
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << tinhhauto(s) << endl;
	}
}
