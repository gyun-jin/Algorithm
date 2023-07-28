// 뒤집기
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int cnt1 = 0;
	int size;
	size = s.length();

	for (int i = 1; i < size; i++) {
		if (s[i - 1] != s[i]) cnt1++;
	}
	if (cnt1 % 2 == 0) cout << cnt1 / 2;
	else cout << (cnt1 + 1) / 2;

	return 0;
}