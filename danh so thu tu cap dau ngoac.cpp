#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		stack<int> st;
		getline(cin, s);
		int dem = 1;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == '(') {
				st.push(dem);
				cout << dem << " ";
				dem++;
			} else if(s[i] == ')') {
				cout << st.top() << " ";
				st.pop();
			}
		}
		cout << endl;
	}
}
