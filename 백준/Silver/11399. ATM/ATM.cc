// ATM
#include<iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int person[1000], num, total = 0;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> person[i];
	}
	sort(person, person + num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			total += person[j];
		}
	}

	printf("%d", total);

	return 0;
}