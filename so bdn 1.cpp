#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		queue<long long> q;
		q.push(1);
		int dem = 0;
		while(q.front() <= n) {
			long long x = q.front();
			dem++;
			q.pop();
			q.push(x * 10 + 0);
			q.push(x*10 + 1);
		}
		cout << dem << endl;
	}
}
