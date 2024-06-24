#include <bits/stdc++.h>
using namespace std;
void xuly(string s) {
	stack<string> st;
	string x = "";
	s += " ";
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == ' ') {
			if(x != "") {
				st.push(x);
				x = "";
			}
		} else {
			x += s[i];
		}
	}
	while(st.size()) {
		cout << st.top() << " ";
		st.pop();
	}
}
int main () {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		xuly(s);
		cout << endl;
	}
}
