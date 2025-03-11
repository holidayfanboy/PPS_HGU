#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack <int> stack;
    int K = 0;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int input;
        cin >> input;
        if (input == 0)
        {
            if (!stack.empty())
            {
                stack.pop();
            }
            else 
            {
                stack.push(input);
            }
        }
        else
        {
            stack.push(input);
        }
    }
    long long result = 0;
    
    while (!stack.empty())
    {  
        result += stack.top();
        stack.pop();
    }

    cout << result << '\n';

    return 0;
}