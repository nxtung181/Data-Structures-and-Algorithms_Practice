#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		queue<string> q;
		vector<string> v;
		q.push("6");
		q.push("8");
		while(q.front().size() <=n) {
			string x = q.front();
			q.pop();
			v.push_back(x);
			q.push(x + "6");
			q.push(x + "8");
		}
		cout << v.size() << endl;
		for(int i= v.size() - 1; i >= 0; i--) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
