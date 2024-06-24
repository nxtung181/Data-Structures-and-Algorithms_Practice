#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, s= 0, tmp = 0;
		cin >> n;
		int a[n+1];
		for(int i = 0 ; i < n; i++) {
			cin >> a[i];
			s+= a[i];
			tmp = max(tmp, s);
			if(s<0) {
				s=0;
			}
		}
		cout << tmp << endl;
	} 
}
