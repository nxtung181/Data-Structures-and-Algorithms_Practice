#include <bits/stdc++.h>
using namespace std;
int n, a[101], tmp, minid;
void in(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void sapxep(int a[], int n) {
	int F[100][100];
	for(int i = 0; i < n - 1; i++) {
		minid = i;
		for(int j = i + 1; j < n; j++) {
			if(a[j] < a[minid]) {
				minid = j;
			}
		}
		tmp = a[minid]; a[minid] = a[i]; a[i] = tmp;
		for(int j = 0; j < n; j++) F[i][j] = a[i][j];
		for(int i = n -1; i >= 0; i++) {
			cout << i + 1 << ": ";
			for(int j = 0; j < n; j++) {
				cout << F[i][j] << " ";
			}
			cout << endl;
		}
	}
}
int main () {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sapxep(a,n);
}
