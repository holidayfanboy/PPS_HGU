#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    for (int i = 1; i <= N; i ++)
    {
        if (i%2 == 0)
        {
            cout << ' ';
        }
        for (int k = 0; k < N*2; k++)
        {
            if (k%2 == 0)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}