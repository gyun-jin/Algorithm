#include<iostream>
#include<stack>
using namespace std;

int main() {
	int num, cnt = 1, max, temp;
	stack<int> stack;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		stack.push(temp);
	}
	max = stack.top();
	while (!stack.empty()) {
		temp = stack.top();
		stack.pop();

		if (temp > max) {
			cnt++;
			max = temp;
		}
	}

	cout << cnt;

	return 0;
}