#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B, V;
    cin >> A >> B >> V;

    long long days = 0;
    days = (V - A) / (A - B);
    if ((V - A) % (A - B) != 0)
    {
        days++;
    }

    cout << days + 1 << endl;

    return 0;
}