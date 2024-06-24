#include <bits/stdc++.h>
using namespace std;
struct task{
	int start, finish;
};

bool cmp (task x, task y) {
	return x.finish < y.finish;
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		task a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i].start;
			cin >> a[i].finish;
		}
		sort(a, a+n, cmp);
		int now = a[0].finish, dem = 1;
		for(int j = 1; j < n; j++) {
			if(a[j].start >= now) {
				dem++;
				now = a[j].finish;
			}
		}
		cout << dem << endl;	
	}
}
