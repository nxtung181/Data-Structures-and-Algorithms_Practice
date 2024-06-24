#include <bits/stdc++.h>
using namespace std;
int n, chuaxet[100], a[100];
void result() {
	for(int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << " ";
}
void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(chuaxet[j]) {
			a[i] = j;
			chuaxet[j] = 0;
			if(i == n) {
				result();
			} else {
				Try(i+1);
				chuaxet[j] = 1;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			a[i] = i;
			chuaxet[i] = 1;
		}
		Try(1);
	}
}
