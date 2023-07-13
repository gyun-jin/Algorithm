// 카드 1
#include<iostream>
#include<queue>
using namespace std;

int main() {
	queue<int> q;
	int num, temp, print;

	cin >> num;
	for (int i = 1; i <= num; i++) {
		q.push(i);
	}
	print = q.front();
	printf("%d ", print);
	q.pop();
	
	while (!q.empty()) {
		temp = q.front();
		q.push(temp);
		q.pop();
		printf("%d ", q.front());
		q.pop();
		
	}

	return 0;
}