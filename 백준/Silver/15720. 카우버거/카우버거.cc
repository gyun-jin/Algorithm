// 카우버거
#include<iostream>
#include <algorithm>
using namespace std;

int compare(int x, int y) {
	return x > y;
}
int main() {
	int num[3];
	int B_price[1000] = { 0 };
	int S_price[1000] = { 0 };
	int D_price[1000] = { 0 };
	long long sum1 = 0, sum2 = 0;
	long long total = 0;

	for (int i = 0; i < 3; i++) {
		cin >> num[i];						// 개수 입력
	}
	for (int i = 0; i < num[0]; i++) {		// 가격 입력
		cin >> B_price[i];
	}
	for (int i = 0; i < num[1]; i++) {		// 가격 입력
		cin >> S_price[i];
	}
	for (int i = 0; i < num[2]; i++) {		// 가격 입력
		cin >> D_price[i];
	}
	sort(B_price, B_price + num[0], compare);
	sort(S_price, S_price + num[1], compare);
	sort(D_price, D_price + num[2], compare);

	int min = num[0];
	for (int i = 1; i < 3; i++) {
		if (min > num[i]) min = num[i];
	}
	
	for (int i = 0; i < min; i++) {
		sum1 += B_price[i] + S_price[i] + D_price[i];
		sum2 = B_price[i] + S_price[i] + D_price[i];
		total += sum2 * 0.9;
	}
	for (int i = min; i < 1000; i++) {
		sum1 += B_price[i] + S_price[i] + D_price[i];
		total += B_price[i] + S_price[i] + D_price[i];
	}

	cout << sum1 << "\n" << total;
}