// 폴리오미노

// 'x'일때 큐에 넣고 '.'일 때 스탑해서 큐의 크기가 4로 나눠지면 개수만큼 'A'로 
//바꾸고 4로 안나눠지는데 2로 나눠지는 경우 개수만큼 'B'를 출력
// 둘 다 안되는 경우가 있을 경우 'A','B' 둘 다 출력하지 않고 -1만 출력
// 'A''B''.'도 큐에 저장

#include<iostream>
#include<queue>
#include<string>
using namespace std;

queue<char> q;

int main() {
	string s;
	int n, size, cnt = 0, flag=0;
	cin >> s;

	size = s.length();
	
	for (int i = 0; i < size; i++) {
		if (s[i] == 'X') {
			cnt++;
			flag = 1;
		}
		if(s[i] =='.'||i==size-1&&s[i]=='X') {
			while (flag==1 && cnt != 0) {
				if (cnt>=4 || cnt % 4 == 0) {
					for (int j = 0; j < 4; j++) {
						q.push('A');
					}
					cnt = cnt - 4;
				}
				else if (cnt % 2 == 0) {
					for (int j = 0; j < 2; j++) {
						q.push('B');
					}
					cnt = cnt - 2;
				}
				else {
					cout << "-1";
					return 0;
				}
			}
			q.push('.');
			flag = 0;
		}
	}
	for (int i = 0; i < size; i++) {
		char ss = q.front();
		q.pop();
		cout << ss;
	}
}