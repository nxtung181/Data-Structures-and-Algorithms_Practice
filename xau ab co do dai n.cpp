#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void in () {
	for(int i = 1; i <=n; i++) {
		if(a[i] == 1) {
			cout << "B";
		} else {
			cout << "A";
		}
	}
	cout << " ";
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
			in();
			sinh();
		}
		cout << endl;
	}
}
