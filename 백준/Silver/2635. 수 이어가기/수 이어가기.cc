#include <iostream>
using namespace std;

int MaxCount(int First, int Second);
void printMax(int First, int Second);

int main() {
	int num, temp, Max = 0, number = 0;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		temp = MaxCount(num, i);
		if (Max < temp) {
			Max = temp;
			number = i;
		}
	}
	printf("%d\n", Max);
	printMax(num, number);

	return 0;
}

int MaxCount(int First, int Second) {
	int maxCount = 1, temp;
	do {
		temp = First - Second;
		First = Second;
		Second = temp;
		maxCount++;
	} while (temp >= 0);

	return maxCount;
}

void printMax(int First, int Second) {
	int temp;

	do {
		printf("%d ", First);
		temp = First - Second;
		First = Second;
		Second = temp;
	} while (temp >= 0);

	printf("%d", First);
}