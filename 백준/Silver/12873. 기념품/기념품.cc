// 기념품
#include<iostream>
#include<queue>
using namespace std;

int main() {
	int n;
	long k = 1;
	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	while (q.size() != 1) {					// 마지막 한 사람 남을 때까지 반복
		for (long i = 1; q.size() != 1; i++) {
			k = (i * i * i - 1) % q.size();	// 제거할 대상 앞사람 찾기

			for (int j = 0; j < k; j++) {	// 제거할 대상 앞사람까지 뒤로 보낸 후
				int temp = q.front();
				q.pop();
				q.push(temp);
			}
			q.pop();						// 제거할 대상 제거
		}
	}
	
	cout << q.front();
	return 0;
}