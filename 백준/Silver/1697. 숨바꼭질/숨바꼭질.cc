#include<iostream>
#include<queue>
using namespace std;

int n, k;
int v[100001];

void bfs(int x, int y) {
	queue<int> q;
	q.push(x);
	v[x] = 0;

	while(!q.empty()) {
		x = q.front();
		q.pop();
		if (x == y) break;

		if (x + 1 <= 100000 && v[x + 1] > v[x]+1) {
			v[x + 1] = v[x] + 1; 
			q.push(x + 1);
		}
		if (x - 1 >= 0 && v[x - 1] > v[x] + 1) {
			v[x-1] = v[x] + 1;
			q.push(x - 1);
		}
		if (x * 2 <= 100000 && v[x * 2] > v[x] + 1) {
			v[x * 2] = v[x] + 1;
			q.push(x * 2);
		}
	}

	cout << v[y];
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> k;

	fill(v, v + 100001, 9999999);
	
	bfs(n, k);

	return 0;
}