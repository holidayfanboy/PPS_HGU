#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool parenthesis(string a) 
{
    stack <char> stack;
    for (int i = 0; i < a.size(); i++) {
		if (a[i] == '(') {
			stack.push('(');
		}
		else {
			if (stack.empty()) return 0;
			stack.pop();
		}
	}
	if (stack.empty()) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int K = 0;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> input;
        if (!parenthesis(input))
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
