#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		long long le = 0, chan = 0;
		for(int i = 0; i < n; i++) {
			if(i % 2 == 0) {
				chan = chan*10 + a[i];
			}else {
				le = le*10 + + a[i];
			} 
		}
		cout << le + chan << endl;
	}	
}
