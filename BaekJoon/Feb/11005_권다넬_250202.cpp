#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long B;
    int N;
    string result;
    cin >> B >> N;

    while (B > 0)
    {
        int num = B % N;
        if (num < 10)
        {
            result += char(num + '0');
        }
        else
        {
            result += char(num - 10 + 'A');
        }
        B /= N;
    }

    for (int i = result.size() -1 ; i >= 0; i--)
    {
        cout << result[i];
    }

    return 0;
}