#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	long long n;
	while(t--) {
		cin >> n;
		if(n < 10) {
			cout << n << endl;
			continue;
		}
		stack<int> v;
		int id = 9;
		while(n > 1 && id > 1) {
			while(n % id == 0) {
				v.push(id);
				n/=id;
			}
			id--;
		}
		if(v.empty() || n > 9) {
			cout << -1 << endl;
			continue;
		}
		while(v.size()) {
			cout << v.top();
			v.pop(); 
		}
		cout  << endl;
	}
}
