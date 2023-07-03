#include<iostream>
using namespace std;

int num[10000] = { 0 };

int main() {
	int p, k;
	int j = 0;

	cin >> p;
	cin >> k;


	num[0] = 1;
	for (int i = 2; i < p; i++) {
		if (p % i == 0) {
			j++;
			num[j] = i;
		}
	}
	num[j + 1] = p;

	cout << num[k - 1];
}