#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int nam[1000];

    for (int i = 0; i < N; i++)
    {
        int input = 0;
        cin >> input;
        nam[i] = input;
    }

    for (int b = 0; b < N; b++)
    {
        int min = 99999;
        int loc = 0;
        
        for (int k = b; k < N; k++)
        {
            if (nam[k] < min)
            {
                loc = k;
                min = nam[k];
            }
        }
        int temp = 0;
        temp = nam[b];
        nam[b] = nam[loc];
        nam[loc] = temp;
    }


    for (int i = 0; i < N; i++)
    {
        cout << nam[i] << endl;
    }
    
    return 0;
}