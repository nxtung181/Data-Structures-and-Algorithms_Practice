#include <bits/stdc++.h>
using namespace std;
int tinh(int a, int b, char c) {
	if(c == '+') return a+b;
	if(c == '-') return a-b;
	if(c == '*') return a*b;
	if(c == '/') return a/b;
}
int tiento(string s) {
	stack<int> st;
	int n = s.length();
	for(int i = n-1; i >= 0;i--) {
		if(isdigit(s[i])) {
			int n = s[i] - '0';
			st.push(n);
		} else {
			int a = st.top(); st.pop();
			int b = st.top(); st.pop();
			int kq = tinh(a,b,s[i]);
			st.push(kq);
		}
	}
	return st.top();
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << tiento(s) << endl;
	}
}
