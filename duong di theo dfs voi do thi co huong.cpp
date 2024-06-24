#include <bits/stdc++.h>
using namespace std;
int n ,s, t, e;
vector<int> List[1001];
bool chuaxet[1001];
int truoc[1001];
void DFS(int u) {
	stack<int> st1;
	st1.push(u);
	chuaxet[u] = false;
	while(!st1.empty()) {
		int x = st1.top();
		st1.pop();
		for(int i : List[x]) {
			if(chuaxet[i]) {
				chuaxet[i] = false;
				st1.push(x);
				st1.push(i);
				truoc[i] = x;
				break;
			}
		}
	} 
}

void induongdi() {
	stack<int> st;
	st.push(t);
	while(st.top() != s) {
		int x = st.top();
		st.push(truoc[x]);
	}
	int cnt = 0;
	while(!st.empty()) {
		cnt++;
		st.pop();
	}
	cout << cnt - 2 << endl;
}

int main () {
	int test;
	cin >> test;
	while(test--) {
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0; i < 1001; i++) List[i].clear();
		cin >> n >> e >> s >> t;
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		DFS(s);
		induongdi();
		cout << endl;
	}
}
