// 좌표 정렬하기 2
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;



bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		cin >> v[i].second;
	}
	
	sort(v.begin(), v.end(), &cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].first <<" ";
		cout << v[i].second << "\n";
	}

	return 0;
}