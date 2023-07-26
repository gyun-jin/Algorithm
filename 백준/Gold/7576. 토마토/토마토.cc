// 토마토
// 다 익지 못한 상황 => 0이 남아이ㅣㅅ는경우
#include<iostream>
#include<queue>
using namespace std;

int n, m, rr, cc, g, p;
int bx[4] = { 1, 0, -1, 0 };
int by[4] = { 0, 1, 0, -1 };
int arr[1001][1001];
int visited[1001][1001];
int dis[1001][1001] = { 0 };
queue<pair<int, int>> q;

int bfs() {
	
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1) q.push({ i,j });
			}
		}

		while (!q.empty()) {

			int r = q.front().first;
			int c = q.front().second;
			visited[r][c] = 1;
			q.pop();

			for (int i = 0; i < 4; i++) {
				rr = r + bx[i];
				cc = c + by[i];
				if (rr < 0 || cc < 0 || rr >= n || cc >= m) continue;		// 범위 벗어나거나 익지 않은 토마토가 아닌 경우
				if (arr[rr][cc] != 0) continue;

				arr[rr][cc] = 1;
				q.push({ rr, cc });
				dis[rr][cc] = dis[r][c] + 1;
				p = rr;
				g = cc;
			}


		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 0) {
					cout << "-1";
					return 0;
				}		// 다 안 익음
			}
		}
	cout << dis[p][g];
	
	return 0;
}
int main() {
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
		cin.ignore();
	}
	int flag = 0;
	for (int i = 0; i < n; i++) {		// 처음부터 다 익은 상황
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				flag = 1;
				break;
			}
		}
	}


	if (flag) bfs();
	else {			// 처음부터 다 익은 상황
		cout << "0\n";
		return 0;
	}
}