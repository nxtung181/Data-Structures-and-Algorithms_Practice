#include <bits/stdc++.h>
using namespace std;
int n, k, a[25], b[25], dem = 0;
void tongdaycon() {
	int sum = 0;
	for(int i = 1; i <=n; i++) {
		if(a[i] == 1) {
			sum+=b[i];
		}
	}
	if(sum == k) {
		dem++;
		for(int i = 1; i <= n; i++) {
			if(a[i] == 1) {
				cout << b[i] << " ";
			}
		}
		cout << endl;
	}
}
void sinh(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			tongdaycon();
			
		} else {
			sinh(i+1);
		}
	}
}

int main () {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	sinh(1);
	cout << dem << endl;
	return 0;
} 
