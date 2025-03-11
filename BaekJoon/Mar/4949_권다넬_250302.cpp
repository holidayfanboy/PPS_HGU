#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool parenthesis(string input) 
{
    stack<char> s;

    for (int i = 0; i < input.size(); i++) 
    {
        char ch = input[i]; 

        if (ch == '(' || ch == '[') 
        {
            s.push(ch);
        } 
        else if (ch == ')') 
        {
            if (s.empty() || s.top() != '(') 
            {
                return false;
            }
            s.pop();
        } 
        else if (ch == ']') 
        {
            if (s.empty() || s.top() != '[') 
            {
                return false;
            }
            s.pop();
        }
    }
    
    return s.empty();  
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    
    while (true) 
    {
        getline(cin, input);
        if (input == ".") break;

        if (parenthesis(input)) 
        {
            cout << "yes\n";
        } 
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}
