#include <bits/stdc++.h>
using namespace std;
int n, a[101], tmp;
void in(int a[], int n) {
	for(int k = 0; k < n; k++) {
		cout << a[k] << " ";
	}
}
void sapxep(int a[], int n) {
	for(int i = 0; i < n; i++) {
		int ok = 0;
		for(int j = 0 ; j < n-1-i; j++) {
			if(a[j] > a[j+1]) {
				tmp = a[j]; a[j] = a[j+1]; a[j+1] = tmp;
				ok = 1;
			}
		}
		if(ok == 0) break;
		cout << "Buoc " << i+1 << ": ";
		in(a,n);
		cout << endl;
	}
}
int main () {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sapxep(a,n);
}
