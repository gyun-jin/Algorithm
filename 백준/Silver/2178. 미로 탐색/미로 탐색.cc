// 미로 탐색
#include<iostream>
#include<queue>
using namespace std;

int a[100][100];
bool visit[100][100];
int by[4] = { 1,0,-1,0 };
int bx[4] = { 0,1,0,-1 };
int n, m;

void bfs(int r, int c) {
	queue<pair<int, int>> q;
	q.push({ r,c });
	visit[r][c] = 1;

	while (!q.empty()) {
		int r = q.front().first;
		int c = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int rr = r + by[i];
			int cc = c + bx[i];

			if (rr < 0 || cc < 0 || rr >= n || cc >= m) continue;
			if (a[rr][cc] == 0 || visit[rr][cc] == 1) continue;

			a[rr][cc] = a[r][c] + 1;
			visit[rr][cc] = 1;
			q.push({ rr,cc });
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	string String;
	for (int i = 0; i < n; i++) {
		cin>>String;
		for (int j = 0; j < m; j++) {
			a[i][j] = String[j] - '0';
		}
	}
	bfs(0, 0);
	cout << a[n - 1][m - 1] << endl;
}

