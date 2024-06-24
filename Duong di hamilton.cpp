#include<bits/stdc++.h>
using namespace std;
vector<int> List[25];
bool chuaxet[25];
int n, e, check;
void Hamilton(int u, int count) {
	if(count == n) {
		check = 1; 
		return;
	}	
	for(int i = 0; i < List[u].size(); i++) {
		int v = List[u][i];
		if(chuaxet[v]) {
			chuaxet[v] = false;
			Hamilton(v, count+1);
			chuaxet[v] = true;
		}
 	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		for(int i = 0; i < 25; i++) List[i].clear();
		check = 0;
		cin >> n >> e;
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i = 1; i <= n; i++) {
			memset(chuaxet, true, sizeof(chuaxet));
			chuaxet[i] = false;
			Hamilton(i,1);
			if(check == 1) {
				cout << 1 << endl;	
			} 
			break;
		}
		if(!check) cout << 0 << endl;
	}
}
