#include<iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v;
	int coin;
	for (int i = 0; i < n; i++) {
		cin >> coin;
		// cin.ignore();
		v.push_back(coin);
	}
	int j = 0;
	while (j + 1 < n && v[j + 1] <= k) {
		j++;
	}
	int cnt = 0;
	while (k > 0) {
		cnt += k / v[j];
		k %= v[j];
		j--;
	}
	cout << cnt;
}