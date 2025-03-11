#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack <int> line;

    int num = 1;
    int pep = 0;
    int count = 0;
    cin >> pep;

    for (int i = 0; i < pep; i++)
    {
        int a = 0;
        cin >> a;
        if (a != num)
        {
            line.push(a);
        }
        else
        {
            num++;
        }
    }
    
    while (!line.empty() && line.top() == num) 
    {
        line.pop();
        num++;
    }


    if (line.empty()) 
    {
    cout << "Nice\n";
    } 
    else 
    {
    cout << "Sad\n";
    }

    return 0;
}
