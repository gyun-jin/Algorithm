// 괄호
#include<iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<char> stack;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		stack.push(str[0]);

		for (int j = 1; j < str.length(); j++) {
			char s = str[j];
			if (s == '(') {
				stack.push(s);
			}
			
			else if (s == ')') {	// ')'이면 VPS 아님
				if(!stack.empty()&&stack.top()=='(') stack.pop();
				else if (stack.empty()) {
					stack.push(s);
				}
			}
		}
		if (!stack.empty()) {
			cout << "NO\n";
			while (!stack.empty()) stack.pop();
		}
		else cout << "YES\n";
		
		
	}

}