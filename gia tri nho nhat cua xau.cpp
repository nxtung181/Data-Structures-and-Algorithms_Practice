#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int k;
		cin >> k;
		priority_queue<int> q;
		string s;
		cin >> s;
		map<char, int> mp;
		for(int i = 0; i < s.size(); i++) {
			mp[s[i]]++;
		}
		for(auto it : mp) {
			q.push(it.second);
		}
		while(k--) {
			int t = q.top();
			t--;
			q.pop();
			q.push(t);
		}
		long long sum = 0;
		while(!q.empty()) {
			int t = q.top();
			sum += t*t;
			q.pop();
		}
		cout << sum << endl;
	}
}
