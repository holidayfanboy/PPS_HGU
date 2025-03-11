#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long S;
    cin >> S;
    int count = 1;
    long long sum = 0;    

    while (true)
    {
        sum += count;

        if (sum > S)
        {
            break;
        }
        count++;
    }
    
    cout << count-1;
    return 0;
}