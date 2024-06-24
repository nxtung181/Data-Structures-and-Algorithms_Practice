#include <bits/stdc++.h>
using namespace std;
int dem ,n;
int x[100], xuoi[100], nguoc[100], chuaxet[100];
void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(chuaxet[j] && xuoi[i-j+n] && nguoc[i+j -1]) {
			x[i] = j;
			chuaxet[j] = 0;
			xuoi[i-j+n] = 0;
			nguoc[i+j-1] = 0;
			if(i == n) {
				dem++;
			} else {
				Try(i+1);
			}
			chuaxet[j] = 1;
			xuoi[i-j+n] = 1;
			nguoc[i+j-1] = 1;				
		}
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			chuaxet[i] = 1;
		}
		for(int i = 1; i <=(2*n-1);i++) {
			xuoi[i] = 1; nguoc[i] = 1;
		}
		dem = 0;
		Try(1);
		cout << dem << endl;
	}
}
