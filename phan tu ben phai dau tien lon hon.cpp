#include <bits/stdc++.h>
using namespace std;
void xuly(int a[], int n) {
	int R[n];
	stack<int> st;
	for(int i = n - 1; i >= 0; i--) {
		while(!st.empty() && st.top() <= a[i]) st.pop();
		if(st.empty()) R[i] = -1;
		else R[i] = st.top();
		st.push(a[i]);
	}
	for(int i = 0; i < n; i++) cout << R[i] << " ";
}
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
		xuly(a,n);
		cout << endl;
	}
}

