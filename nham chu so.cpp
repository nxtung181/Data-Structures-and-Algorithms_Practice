#include <bits/stdc++.h>
using namespace std;

int five(string s) {
	int n = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '6') {
			s[i] = '5';
		}
		n = n*10 +(s[i] -'0');
	}
	return n;
}

int six(string s) {
	int n = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '5') {
			s[i] = '6';
		}
		n = n *10 + (s[i] - '0');
	}
	return n;
}

int main () {
	string a, b;
	cin >> a;
	cin >> b;
	cout << five(a) + five(b) << " " << six(a) + six(b);
}

