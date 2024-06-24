#include <bits/stdc++.h>
using namespace std;
int main () {
	int a[10] ={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t;
	cin >> t;
	while(t--) {
		int n, res = 0;
		cin >> n;
		for(int i = 9; i >= 0; i--) {
			res += n/a[i];
			n %= a[i];
		}
		cout << res << endl;
	}
}
