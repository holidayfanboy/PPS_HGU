#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> stack;
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int input = 0;
        cin >> input;

        if (input == 1)
        {
            int num = 0;
            cin >> num;
            stack.push(num);
        }
        else if (input == 2)
        {
            int result = 0;
            if (stack.empty())
            {  
                cout << "-1" << '\n';
            }
            else
            {
                result = stack.top();
                cout << result << '\n';
                stack.pop();
            }
        }
        else if (input == 3)
        {
            int result = 0;
            result = stack.size();
            cout << result << '\n';
        }
        else if (input == 4)
        {
            if (!stack.empty())
            {
                cout << 0 << '\n';
            }
            else 
            {
                cout << 1 << '\n';
            }
        }
        else if (input == 5)
        {
            int result = 0;
            if (stack.empty())
            {  
                cout << "-1" << '\n';
            }
            else
            {
                result = stack.top();
                cout << result << '\n';
            }
        }
    }

    return 0;
}