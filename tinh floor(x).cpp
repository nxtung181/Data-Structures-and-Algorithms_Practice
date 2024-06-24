#include <bits/stdc++.h>
using namespace std;
int Floor(int a[], int l, int r, int x) {
	int ans = -1;
	while(r >= l) {
		int mid = (r+l)/2;
		if(a[mid] <= x) {
			l = mid  + 1;
			ans = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	return ans;
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n+1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int tmp = Floor(a,0,n-1,x);
		if(tmp == -1) {
			cout << -1 << endl;
		} else {
			cout << tmp << endl;
		}
	}
}

