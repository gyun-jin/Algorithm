// 접미사 배열
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;
	int len = str.length();
	string s[1000];

	for (int i = 0; i < len; i++) {
		s[i] = str.substr(i, len);
	}
	sort(s, s + len);

	for (int i = 0; i < str.size(); i++) {
		cout << s[i] << endl;
	}
}