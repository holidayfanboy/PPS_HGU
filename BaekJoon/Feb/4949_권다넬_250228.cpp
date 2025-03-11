#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack<char> stack;
    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        char a = input[i];
        if (a == '(' || a == '[')
        {
            stack.push(a);
        }
        if (a == ')' || a == ']')
        {
            if (stack.empty())
            {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}