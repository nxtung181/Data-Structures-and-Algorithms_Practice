#include <bits/stdc++.h>
using namespace std;
string s;
int a[1000], chuaxet[1000];

void Try(int i) {
	for(int j = 0; j < s.size(); j++) {
		if(chuaxet[j]) {
			a[i] = j;
			chuaxet[j] = 0;
			if(i == s.size()-1) {
				for(int i = 0; i < s.size(); i++) {
					cout << s[a[i]];
				}
				cout << " ";
			} else {
				Try(i+1);
			}
			chuaxet[j] = 1;
		}
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			chuaxet[i] = 1;
		}
		Try(0);
		cout << endl;
	}
}
