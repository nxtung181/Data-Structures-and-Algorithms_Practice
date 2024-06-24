#include <bits/stdc++.h>
using namespace std;
int n; int a[25];
bool check() {
	for(int i = 1; i <= n; i++) {
		if(a[i] != a[n + 1 - i]) {
			return 0;
		}
	}
	return 1;
}
void result() {
	for(int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void sinh(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			if(check()){
				result();
			}
		} else {
			sinh(i+1);
		}
	}
}

int main () {
	cin >> n;
	sinh(1);
	return 0;
} 
