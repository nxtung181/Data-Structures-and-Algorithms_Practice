#include <bits/stdc++.h>
using namespace std;
struct task {
	int start, finish;
};
bool cmp(task x, task y) {
	if(x.finish == y.finish) {
		return x.start < y.start;
	}
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
		sort(a, a + n, cmp);
		int i = 0, dem = 1;
		for(int j = 1; j < n; j++) {
			if(a[j].start >= a[i].finish) {
				i = j;
				dem++;
			}
		}
		cout << dem << endl;
	} 
	
}

