#include <bits/stdc++.h>
using namespace std;
int main () {
	queue<long long> q;
	vector<long long> lk;
	q.push(4);
	q.push(7);
	lk.push_back(4);
	lk.push_back(7);
	long long top, x, y;
	while(q.front() <= 1e9) {
		top = q.front();
		q.pop();
		x = top*10 + 4;
		y = top * 10 + 7;
		q.push(x);
		q.push(y);
		lk.push_back(x);
		lk.push_back(y);
	}
	long long a, b, index;
	cin >> a >> b;
	long long ans = 0, dem  = 0;
	index = lower_bound(lk.begin(), lk.end(), a) - lk.begin();
	while(a <= b) {
		dem = min(lk[index], b) - a + 1;
		ans += dem*lk[index];
		a = lk[index]  + 1;
		index++;
	}
	cout << ans;
}
