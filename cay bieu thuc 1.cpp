#include <bits/stdc++.h>
using namespace std;
struct Node {
	char data;
	Node *left, *right;
	Node(char x) {
		x = data;
		left = right = NULL;
	}
};
void  LNR(Node *root) {
	if (root!=NULL ) { 
		LNR(root -> left);
		cout << root->data << " ";
	 	LNR(root-> right); 
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack<Node*> st;
		Node* root = NULL;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
				root = new Node(s[i]);
				root->right = st.top(); st.pop();
				root->left = st.top(); st.pop();
				st.push(root);
			} else {
				st.push(new Node(s[i]));
			}
		}
		LNR(st.top());
		cout << endl;
	}	
}













