#include <iostream>
using namespace std;

int main() {

	string check;
	string str;
	int size;

	while (true) {
		cin >> str;
		int i;
		if (str.size() >= 1 && str.size() <= 99999) {
			if (str == "0") {
				return 0;
			}

			else
			{
				size = str.size();
				for (i = 0; i < size; i++) {

					if (str[i] != str[size - i-1]) {
						check = "false";
						cout << "no" << endl;
						break;
					}
					else check = "true";
				}
			}
			if (check == "true") cout << "yes" << endl;
		}

	}
}