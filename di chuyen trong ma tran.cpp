#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[100][100];
vector<int> v;
void Try(int i, int j) {
	if(i == m && j == n) {
		v.push_back(a[i][j]);
		return;
	}
	if(i < m) {
		Try(i + 1, j);
	}
	if(j < n) {
		Try(i, j + 1);
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		v.clear();
		cin >> m >> n;
		for(int i = 1; i <= m; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		Try(1,1);
		cout << v.size() << endl;
	}
}
