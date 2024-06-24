#include <bits/stdc++.h>
using namespace std;
int n, k, a[15], b[15], ok;
void sinh(int a[], int n, int k) {
	int j = k;
	while(k >= 1 && a[j] == n - k + j) {
		j--;
	}
	if(j == 0) {
		ok = 0;
	}else {
		a[j]++;
		for(int i = j + 1; i <= k; i++) {
			a[i] = a[i-1] + 1;
		}
	}
}
bool check() {
	for(int i = 1; i <= k; i++) {
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
		cin >> n >> k;
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
			b[i] = i;
		}
		ok = 1;
		int dem = 1;
		while(ok) {
			if(check()) {
				cout << dem << endl;
				break; 
			}
			sinh(b,n,k);
			dem++;
		}
	}
}
