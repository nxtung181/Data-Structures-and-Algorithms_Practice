#include <bits/stdc++.h>
using namespace std;
void sapxep(int a[], int n) {
	int F[100][100];
	for(int i = 0; i <= n-2; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				int t = a[i]; a[i] = a[j]; a[j] = t;
			}
		}
		for(int j = 0; j < n; j++) F[i][j] = a[j];
	}
	for(int i = n - 2; i >= 0; i--) {
		cout << "Buoc " << (i+1) << ": ";
		for(int j = 0; j < n; j++) {
			cout << F[i][j] << " ";
		}
		cout <<endl;
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, a[101];
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sapxep(a,n);
		cout << endl;
	}
}
