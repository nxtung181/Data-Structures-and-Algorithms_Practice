#include <bits/stdc++.h>
using namespace std;
int n, a[1000], ok;
void result() {
	for(int i = 1; i <= n; i++) {
		if(a[i] == 1) {
			cout << "2";
		}
		if(a[i] == 2) {
			cout << "3";
		}
		if(a[i] == 3){
			cout << "5";
		}
		if(a[i] == 5) {
			cout << "7";
		}
	}
	cout << endl;
}
int kiemtra(int a[], int n) {
	if (a[n] == 2) {
		return 0;
	}
	return 1;
}
void sinh() {
	int j = n - 1;
	while(a[j] > a[j+1]) {
		j--;
	}
	if(j == 0) {
		ok = 0;
	} else {
		int k = n;
		while(a[k] < a[j]) {
			k--;
		}
		int t = a[j]; a[j] = a[k]; a[k] = t;
		int l = j + 1, r = n;
		while(l<r) {
			int t = a[l]; a[l] = a[r]; a[r] = t;
			l++; r--;
		}
	}
}
int main () {
		cin >> n;
		ok = 1;
		for(int i = 1; i <= n; i++) {
			a[i] = i;
		}
		while(ok) {
			if(kiemtra(a,n)) result();
			sinh();
		}
		cout << endl;				
	
}
