// 수들의 합
#include<iostream>
#include<vector>
using namespace std;

int arr[10001];

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		arr[i] = j;
	}

	int s = 0;
	int e = 0;
	int sum = 0, cnt = 0;

	while (e <= n) {
		if (sum >= m) {
			sum -= arr[s++];
		}
		else if (sum < m) {
			sum += arr[e++];
		}
		if (sum == m) {
			cnt++;
		}
	}
	cout << cnt;
}