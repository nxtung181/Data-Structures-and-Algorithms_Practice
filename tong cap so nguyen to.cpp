#include <bits/stdc++.h>
using namespace std;
int nguyento(int n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}
int check(int a, int b) {
	if(nguyento(a) && nguyento(b)) {
		return 1; 
	}
	return 0;
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int k = 0;
		for(int i = 2; i <= n/2; i++) {
			if(check(i,n-i)) {
				k = 1;
				cout << i << " " << n - i << endl;
				break;
			}
		}
		if(k == 0) cout << -1 << endl;
	}
}
