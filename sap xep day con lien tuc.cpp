#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int &i : a) {
			cin >> i;
		}
		vector<int> b = a;
		sort(a.begin(), a.end());
		int i = 0, j = n - 1;
		while(a[i] == b[i]) {
			i++;
		}
		while(a[j] == b[j] && j > i) {
			j--;
		}
		cout << i + 1 << " " << j + 1 << endl;
	}	
}
