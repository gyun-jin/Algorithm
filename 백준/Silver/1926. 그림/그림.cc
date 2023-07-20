// 그림
#include<iostream>      
#include<queue>
using namespace std;

bool visited[500][500] = { 0 };
int pict[500][500];
int n, m, cnt = 0;
int bx[4] = { 1,0,-1,0 };
int by[4] = { 0,1,0,-1 };
queue<pair<int,int>> q;

void bfs(int x, int y) {
	int max = 0, count = 0;
	bool flag = false;

	for (int k = 0; k < n; k++) {
		for (int h = 0; h < m; h++) {

			flag = false;
			if (pict[k][h] == 1 && visited[k][h] == 0) {
				q.push({ k,h });
				flag = true;
				cnt++;
			}

			while (!q.empty()) {
				
				x = q.front().first;
				y = q.front().second;
				visited[x][y] = 1;
				q.pop();

				for (int i = 0; i < 4; i++) {
					int xx = x + bx[i];
					int yy = y + by[i];
					if (xx < 0 || yy < 0 || xx >= 500 || yy >= 500 || visited[xx][yy] == 1 || pict[xx][yy] == 0) continue;

					cnt++;
					q.push({ xx,yy });
					visited[xx][yy] = 1;
				}
			}
			if (max < cnt) {
				max = cnt;
			}
			if (flag) count++;
			cnt = 0;
		}
	}

	cout << count << endl<< max << endl;
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int n; cin >> n;
			pict[i][j] = n;
		}
	}

	bfs(0, 0);

	return 0;
}