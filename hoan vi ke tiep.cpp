#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, tmp, a[1001];
		cin >> n;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int j = n - 1;
		while(j > 0 && a[j] > a[j+1]) {
			j--;
		}
		if(j > 0) {
			int k = n;
			while(a[j] > a[k]) {
				k--;
			}
			tmp = a[k]; a[k] = a[j]; a[j] = tmp;
		}
		int l = j + 1, r = n;
			while(l <= r) {
				tmp = a[r]; a[r] = a[l]; a[l] = tmp;
				l++; r--;
			}
		for(int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		cout << endl; 
	}
}
