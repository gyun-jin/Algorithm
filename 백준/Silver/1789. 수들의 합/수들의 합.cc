// 수들의 합
#include<iostream>
using namespace std;

int main() {
	long long max, i = 1, cnt = 0;
	cin >> max;

	while (max >= i) {
		max -= i;
		i++;
		//cnt++;
	}

	if (max >= 0 && max < i) cout << i - 1;
}