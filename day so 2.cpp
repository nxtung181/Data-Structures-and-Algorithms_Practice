#include <bits/stdc++.h>
using namespace std;
vector<string> ss;
void thuchien(int a[], int n) {
	if(n > 0) {
		string s = "";
		s= s + "[";
		for(int i = 0; i < n -1; i++) {
			s = s + to_string(a[i]);
			s = s + " ";
		}
		s = s + to_string(a[n-1]);
		s = s +  "] ";
		ss.push_back(s);
		for(int i = 0 ; i < n - 1; i++) {
			a[i] = a[i] + a[i+1];
		}
		thuchien(a,n-1);
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		ss.clear();
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		thuchien(a, n);
		for(int i = ss.size() - 1; i >= 0; i--) {
			cout << ss[i];
		}
		cout << endl;
	}
}
