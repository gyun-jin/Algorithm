#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string str;
	int h = 1;
	int res = 0;
	while (h <= n) {
		int cnt = 0;
		cin>>str;

		for (int i = 0; i<str.size(); i++) {
			if (str[i] == 'O') {
				cnt++;
				res += cnt;
			}
			else if (str[i] == 'X') {
				cnt = 0;
			}
		}
		cout << res << endl;
		res = 0;
		h++;
	}

	
}