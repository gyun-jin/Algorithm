#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string subject;
	double score, avg = 0, sum = 0;
	string grade;
	int cnt = 0;

	for (int i = 0; i < 20; i++)
	{

		cin >> subject;
		cin >> score;
		cin >> grade;

		if (subject.size() <= 50 && subject.size() >= 1) {

			if (grade == "P") {
				cnt++;
				if (cnt == 20) {
					return 0;
				}
			}

			if (grade == "A+") {
				avg += 4.5 * score;
				sum += score;
			}
			if (grade == "A0") {
				avg += 4.0 * score;
				sum += score;
			}
			if (grade == "B+") {
				avg += 3.5 * score;
				sum += score;
			}
			if (grade == "B0") {
				avg += 3.0 * score;
				sum += score;
			}
			if (grade == "C+") {
				avg += 2.5 * score;
				sum += score;
			}
			if (grade == "C0") {
				avg += 2.0 * score;
				sum += score;
			}
			if (grade == "D+") {
				avg += 1.5 * score;
				sum += score;
			}
			if (grade == "D0") {
				avg += 1.0 * score;
				sum += score;
			}
			if (grade == "F") {
				avg += 0.0 * score;
				sum += score;
			}

		}
		else return 0;
	}
	avg /= sum;
	cout << avg;
	return 0;
}