#include<iostream>
#include<queue>
using namespace std;

int n, m;
int bx[4] = { 1,0,-1,0 };
int by[4] = { 0,1,0,-1 };
bool visit[100][100];
int v[100][100];

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	visit[x][y] = 1;

	while(!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int j = 0; j < 4; j++) {
			int xx = x + bx[j];
			int yy = y + by[j];

			if (xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
			if (v[xx][yy] == 0 || visit[xx][yy]) continue;

			q.push({ xx,yy });
			visit[xx][yy] = 1;
			v[xx][yy] = v[x][y] + 1;
		}
	}

}

int main() {
	cin >> n >> m;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			v[i][j] = s[j] - '0';
		}
	}

	bfs(0, 0);

	cout << v[n - 1][m-1];
}