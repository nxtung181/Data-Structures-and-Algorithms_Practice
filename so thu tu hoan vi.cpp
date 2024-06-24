#include <bits/stdc++.h>
using namespace std;
int ok, n, a[10], b[10];
void sinh(int a[], int n) {
	int j = n-1;
	while(j >= 1 && a[j] > a[j+1]) {
		j--;
	}
	if(j == 0) {
		ok = 0;
	} else {
		int k = n;
		while(a[k] < a[j]) {
			k--;
		}
		int t = a[k]; a[k] = a[j]; a[j] = t;
		int l = j + 1, r = n;
		while(l <= r) {
			int t = a[r]; a[r] = a[l]; a[l] = t;
			l++; r--;
		}
	}
}
bool check() {
	for(int i = 1; i <= n; i++) {
		if(a[i] != b[i]) {
			return 0;
		}
	}
	return 1;
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			cin >> b[i];
		}
		for(int i = 1; i <= n; i++) {
			a[i] = i;
		}
		int dem = 1, ok = 1;
		while(ok) {
			if(check()) {
				cout << dem << endl;
				break;
			}
			sinh(a,n);
			dem++;	
		}		
	}
}
