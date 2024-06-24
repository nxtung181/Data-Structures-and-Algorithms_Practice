#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	string s;
	stack<int> st;
	while(cin >> s) {
		if(s == "push") {
			cin >> n;
			cin.ignore();
			st.push(n);
		}
		else if(s == "pop") {
			st.pop();
		}
		else if(s == "show") {
			stack<int> st2;
			if(st.size()) {
				st2.push(st.top());
				st.pop();
				while(st2.size()) {
					cout << st2.top() << " ";
					st.push(st2.top());
					st2.pop();
				}
				cout << endl;
			}else {
				cout << "empty" << endl;
			}
		}
	}
}
