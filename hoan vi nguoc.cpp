#include <bits/stdc++.h>
using namespace std;
int n, a[1000], ok;
void in() {
	for(int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << " ";
}
void sinh() {
	int j = n - 1;
	while(j >= 1 && a[j] < a[j+1]) {
		j--;
	}
	if(j == 0) {
		ok = 0;
	} else {
		int k = n;
		while(a[k] > a[j]) {
			k--;
		}
		int t = a[j]; a[j] = a[k]; a[k] = t;
		int l = j + 1, r = n;
		while(l<r) {
			int t = a[l]; a[l] = a[r]; a[r] = t;
			l++; r--;
		}
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		int m= n, i = 1;
		ok = 1;
		while(m > 0) {
			a[i] = m;
			i++;
			m--;
		}
		while(ok) {
			in();
			sinh();
		}
		cout << endl;				
	}
}
