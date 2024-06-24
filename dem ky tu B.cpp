#include <bits/stdc++.h>
using namespace std;
long long F[100];
int sinh(long long n, long long k) {
	int dem = 0;
	if(n == 0) return dem;
	if(n == 1) dem++;
	if(k <= F[n-2]) {
		return sinh(n-2,k);
	}
	return dem;
}
int sinh1(long long n, long long k) {
	int dem1 = 0;
	if(n == 0) return dem1;
	if(n == 1) dem1++;
	if(k > F[n-2]) {
	 	return sinh1(n-1, k - F[n-2]); 
	 }
	return dem1;
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
		if(k <= F[n-2]) {
			cout << sinh (n,k) << endl;
		} else {
			cout << sinh(n,k) + sinh1(n,k) << endl;
		}
	}
	
}
