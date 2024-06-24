#include <bits/stdc++.h>
using namespace std;
long long F[100];
char fiboword(long long n, long long k) {
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k <= F[n-2]) return fiboword(n-2,k);
	return fiboword(n-1, k - F[n-2]);
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		F[1] = F[2] = 1;
		for(int i = 3; i <= 101; i++) {
			F[i] = F[i-1] + F[i-2];
		}
		cout << fiboword(n,k) << endl;
	}
	
}
