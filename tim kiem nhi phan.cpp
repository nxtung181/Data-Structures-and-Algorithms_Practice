#include <bits/stdc++.h>
using namespace std;
int find(int a[], int l, int r, int x) {
	if(r >= l) {
		int mid = l + (r-l)/2;
		if(a[mid] == x) {
			return mid;
		}
		if(a[mid] > x) {
			return find(a, l, mid-1, x);
		}
		if(a[mid] < x) {
			return find(a,mid+1, r, x);
		}
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n+1];
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int tmp = find(a,1,n,k);
		if(tmp == -1) {
			cout << "NO" << endl;
		} else {
			cout << tmp << endl;
		}
	}
}
