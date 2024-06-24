#include <bits/stdc++.h>
using namespace std;
int n, x, a[1000001];
bool cmp(pair<int,int> a, pair<int,int> b) {
	if(abs(x - a.first) != abs(x - b.first)) {
		return abs(x - a.first) < abs(x - b.first);
	}
	return a.second < b.second;
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		pair<int,int> a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i].first;
			a[i].second = i;
		}
		stable_sort(a, a+ n, cmp);
		for(int i = 0; i < n; i++) {
			cout << a[i].first << " ";
		}
		cout << endl;
	}
}
//void arrange(int arr[], int n, int x)
//{
//    // Below lines are similar to insertion sort
//    for (int i = 1; i < n; i++) {
//        int diff = abs(arr[i] - x);
// 
//        // Insert arr[i] at correct place
//        int j = i - 1;
//        if (abs(arr[j] - x) > diff) {
//            int temp = arr[i];
//            while (abs(arr[j] - x) > diff && j >= 0) {
//                arr[j + 1] = arr[j];
//                j--;
//            }
//            arr[j + 1] = temp;
//        }
//    }
//}
 
