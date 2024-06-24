#include <bits/stdc++.h>
using namespace std;
int n, ok;
string a;
void sinh() {
	int i = a.length() - 1;
	while(i >= 1 && a[i] == '1') {
		a[i] = '0';
		i--;
	}
	if(i == 0) {
		ok = 0;
	} else {
		a[i] = '1';
	}
}
int check1() {
		if(a[1] != '1' || a[n-1] != '0') {
			return 0;
		}
		if(a.find("11")) {
			return 0;
		}
		if(a.find("0000")) {
			return 0;
		}
	return 1;
}

int main () {
	cin >> n;
	a.resize(n);
	for(int i = 0; i < a.length(); i++) {
		a[i] = '0';
	}
	ok =1;
	while(ok) {
		if(check1()) {
			for(int i = 0; i < a.length(); i++) {
				if(a[i] == '1') {
					cout << '8';
				} else {
					cout << '6';
				}
			}
			cout << endl;
		}
		sinh();
	}
}

