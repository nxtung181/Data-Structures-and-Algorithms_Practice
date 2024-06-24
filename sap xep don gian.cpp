#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, dem = 0;
	cin >> n;
	vector<int> a(n+5), F(n+5,0);
	for(int i = 1;i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) {
		F[a[i]] = F[a[i]-1] + 1;
		dem = max(dem, F[a[i]]);
	}
	cout << n - dem;
}
