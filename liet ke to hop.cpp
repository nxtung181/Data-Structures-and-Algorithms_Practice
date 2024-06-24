#include <bits/stdc++.h>
using namespace std;
int n,k, a[100];
set<int> s;
vector<int> v;
void sinh(int i) {
	n = v.size() - 1;
	for(int j = v[i-1] + 1; j <= n - k + i; j++) {
		v[i] = j;
		if(i == k) {
			for(int i = 1; i <= k; i++) {
				cout << v[i] << " "; 
			}
			cout << endl;
		} else {
			sinh(i+1);
		}
	}
}

int main () {
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	for(auto x : s ){
		v.push_back(x);
	}
	v.insert(v.begin(), 0);
	sinh(1);
}
