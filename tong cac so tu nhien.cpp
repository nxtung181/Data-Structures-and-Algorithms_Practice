#include <bits/stdc++.h>
using namespace std;
int n; vector<int> a;
vector<vector<int>> kq;
void Try(int i, vector<int> v,int sum = 0) {
	if(sum > n) return;
	if(sum == n) {
		kq.push_back(v);
		return;
	}
	for(int j = i; j < a.size(); j++) {
		v.push_back(a[j]);
		Try(j, v, sum+a[j]);
		v.pop_back();
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		vector<int> v;
		cin >> n;
		a.resize(n);
		for(int i = n; i > 0; i--) {
			a[n - i] = i;
		}
		Try(0,v);
		cout << kq.size() << endl;
		for(vector<int> &c : kq) {
			cout << "(";
			for(int j = 0; j < c.size() - 1; j++) {
				cout << c[j] << " ";	
			}
			cout << c.back() << ")" << " ";
		}
		cout << endl;
		kq.clear();
	}
}
