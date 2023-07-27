// 1로 만들기
#include<iostream>
using namespace std;

int arr[1000001] = { 0,0,1,1 };	// 어떤 수에서 3가지 연산을 하고 나온 수가 이미 저장된 최소 횟수가 있다면 그 횟수를 더함
int num;

int main() {
	cin >> num;

	for (int i = 4; i <= num; i++) {
		arr[i] = arr[i - 1] + 1;

		if (i % 2 != 0 && i % 3 != 0) arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0 && i % 3 != 0) { if (arr[i / 2] >= arr[i - 1]) arr[i] = arr[i - 1] + 1; else arr[i] = arr[i / 2] + 1; }
		if (i % 2 != 0 && i % 3 == 0) { if (arr[i / 3] >= arr[i - 1]) arr[i] = arr[i - 1] + 1; else arr[i] = arr[i / 3] + 1; }
		if (i % 2 == 0 && i % 3 == 0) {
			if (arr[i / 3] <= arr[i / 2]) {
				if (arr[i / 3] <= arr[i - 1]) arr[i] = arr[i / 3] + 1;
			}
			else {
				if (arr[i / 2] <= arr[i - 1]) arr[i] = arr[i / 2] + 1;
			}
		}
	}
	cout << arr[num];
}