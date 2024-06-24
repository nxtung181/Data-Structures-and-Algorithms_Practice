#include <bits/stdc++.h>
using namespace std;
int n, temp, a[101];
void in(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void sapxep(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[i] > a[j]) {
				temp = a[j]; a[j] = a[i]; a[i] = temp;
			}
		}
		cout << "Buoc " << i+1 << ": "; in(a,n); 
		cout << endl;
	}
}

int main () {
	cin >> n;
	for(int i = 0 ; i < n; i++) {
		cin >> a[i];
	}
	sapxep(a,n);
}
