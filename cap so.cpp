#include <bits/stdc++.h>
using namespace std;
struct capso {
	int dau, cuoi;
};

bool cmp(capso x, capso y) {
	return x.cuoi < y.cuoi;
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		capso a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i].dau >> a[i].cuoi;
		}
		sort(a, a + n, cmp);
		int dem = 1, now = a[0].cuoi;
		for(int j = 1; j < n; j++) {
			if(a[j].dau > now) {
				dem++;
				now = a[j].cuoi;
			}
		}
		cout << dem << endl;
	}
}
