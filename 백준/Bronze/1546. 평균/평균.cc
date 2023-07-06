#include<iostream>
using namespace std;

int main(void) {
	double array[1000];
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	double max = array[0];
	for (int i = 1; i < N; i++) {
		if (max < array[i]) max = array[i];
	}

	for (int i = 0; i < N; i++) {
		array[i] = (array[i] / max * 100);
	}

	double avg = 0;
	for (int i = 0; i < N; i++) {
		avg += array[i];
	}
	avg = avg / N;

	cout << avg << endl;
}