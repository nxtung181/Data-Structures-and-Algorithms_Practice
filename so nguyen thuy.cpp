#include <bits/stdc++.h>
using namespace std;
int main () {
	queue<string> q;
	q.push("4");
	q.push("5");
	vector<string> v;
	v.push_back("44");
	v.push_back("55");
	while(v.size() < 10005) {
		string top = q.front();
		q.pop();
		string s1 = top + "4";
		string s2 = top + "5";
		q.push(s1);
		q.push(s2);
		reverse(s1.begin(), s1.end());
		v.push_back(top + "4" + s1);
		reverse(s2.begin(), s2.end());
		v.push_back(top + "5" + s2);
	}
	int t; 
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
