#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
vector<string> v;
int n, k, a[100], ok;
string s;
void sinh() {
	n = v.size();
	int i = k;
	while(i > 0 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		ok = 0;
	} else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j-1]  +1;
		}
	}
}

int main () {
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> s;
		mp[s]++;
	}
	for(auto x : mp){
		v.push_back(x.first);
	}
	for(int i = 1; i <= k; i++) {
		a[i] = i;
	}
	ok = 1;
	while(ok) {
		for(int i = 1; i <= k; i++) {
			cout << v[a[i]-1] << " ";
		}
		cout << endl;
		sinh();
	}
}
