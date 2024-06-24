#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok;
int kt(int a[], int n) {
	for(int i = 1; i<= n; i++) {
		if(a[i] == a[i+1] && a[i] == 1) {
			return 0;
		}
		if(a[1] != 1 || a[n] != 0) {
			return 0;
		}
	}
	return 1;
}
void sinh() {
	int j = n;
	while(j >= 1 && a[j] == 1) {
		a[j] = 0;
		j--;
	}
	if(j == 0) {
		ok = 0;
	} else {
		a[j] = 1;
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ok = 1;
		for(int i = 1; i <= n; i++) {
			a[i] = 0;
		}
		while(ok) {
			if(kt(a,n) == 1) {
				for(int i = 1; i <= n; i++) {
					if(a[i] == 1) {
						cout << "H";
					} else {
						cout << "A";
					}
				}
				cout << endl;
			}
			sinh();
		}
	}
}
