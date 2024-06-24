#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int a[n];
	map<int,int> v;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		v[a[i]]++;
		if(v[a[i]] == 1) {
			cout << a[i] << " ";
		}
	}
}
