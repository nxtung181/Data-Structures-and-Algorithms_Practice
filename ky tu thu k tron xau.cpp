#include <bits/stdc++.h>
using namespace std;
long long power(long long n, long long k) {
	if(k == 0) return 1;
	long long x = power(n, k/2);
	if(k%2==0) return x*x;
	else return n*x*x;
}
char kytuthuk(long long n, long long k) {
	long long mid = power(2, n -1);
	if(k == mid) {
		return 64 + n;
	}
	if(k == 1) {
		return 'A';
	}
	if(k > mid) return kytuthuk(n-1, 2*mid - k);
	else return kytuthuk(n-1, k);
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		long long n , k;
		cin >> n >> k;
		cout << kytuthuk(n,k) << endl;
	}
}
