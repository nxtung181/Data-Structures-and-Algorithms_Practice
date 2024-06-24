#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
	int n, m;
	cin >> n >> m;
	int a[m], b[m];
	for(int &i : a) {
		cin >> i;
	}
	for(int i = 0; i < m; i++) {
		b[i] = n - a[i];
	}
	int l[m], r[m];
	stack<int> st1, st2, st3, st4;
	st1.push(m-1);
	for(int i = m - 1; i >= 0; i--) {
		while(st1.size() && a[i] <= a[st1.top()]) 
			st1.pop();
		if(st1.size()) {
			r[i] = st1.top() - 1;
		} else {
			r[i] = m -1;
		}
		st1.push(i);	
	}
	for(int i = 0; i < m; i++) {
		while(st2.size()&& a[i] <= a[st2.top()])
			st2.pop();
		if(st2.size()) {
			l[i] = st2.top() + 1;
		} else {
			l[i] = 0;
		}
		st2.push(i);
	}
	long long res1 = 0, res2 = 0;
	for(int i = 0; i < m; i++) {
		res1 = max(res1, 1LL*a[i]*(r[i] - l[i] + 1));
	}
	st3.push(m-1);
	for(int i = m - 1; i >= 0; i--) {
		while(st3.size() && b[i] <= b[st3.top()]) 
			st3.pop();
		if(st3.size()) {
			r[i] = st3.top() - 1;
		} else {
			r[i] = m -1;
		}
		st3.push(i);	
	}
	for(int i = 0; i < m; i++) {
		while(st4.size()&& b[i] <= b[st4.top()])
			st4.pop();
		if(st4.size()) {
			l[i] = st4.top() + 1;
		} else {
			l[i] = 0;
		}
		st4.push(i);
	}	
	for(int i = 0; i < m; i++) {
		res2 = max(res2, 1LL*b[i]*(r[i] - l[i] + 1));
	}
	cout << max(res1, res2);
}
