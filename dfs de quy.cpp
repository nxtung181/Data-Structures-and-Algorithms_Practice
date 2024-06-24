#include <bits/stdc++.h>
using namespace std;

int a[100][100], n;
bool unchecked[100];

void dfs(int u) {
	int v;
	cout << u << " ";
	unchecked[u] = false;
	for(v = 1; v <=n; v++) {
		if(a[u][v] == 1 && unchecked[v] == true) {
			dfs(v);
		}
	}
}


int main () {
	int n;
	cin >> n;
	cout << "Nhap ma tran ke: " << endl;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		unchecked[i] = true;
	}
	for(int i = 1; i <= n; i++) {
		if(unchecked[i]) {
			dfs(i);
		}
	}
}
