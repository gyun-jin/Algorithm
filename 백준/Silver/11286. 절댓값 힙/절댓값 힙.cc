// 절댓값 힙
#include<iostream>
#include <vector>
#include<queue>
#include <algorithm>
using namespace std;

priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m == 0) {
			if (pq.empty()) printf("0\n");
			else {
				printf("%d\n", pq.top().second);
				int h = pq.top().first;
				pq.pop();
			}
		}
		else
		{
			pq.push({ abs(m), m });
		}
	}
}