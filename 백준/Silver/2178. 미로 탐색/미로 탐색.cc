#include <iostream>
#include <queue>
using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;

int a[MAX_N][MAX_M];
bool visit[MAX_N][MAX_M];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n, m;

void bfs(int r, int c) {
    queue<pair<int, int>> q;
    q.push({r, c});
    visit[r][c] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (a[nx][ny] == 0 || visit[nx][ny]) continue;

            a[nx][ny] = a[x][y] + 1;
            visit[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            a[i][j] = str[j] - '0';
        }
    }

    bfs(0, 0);
    cout << a[n - 1][m - 1] << endl;

    return 0;
}
