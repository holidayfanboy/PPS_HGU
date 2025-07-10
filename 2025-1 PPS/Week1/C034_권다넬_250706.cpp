#include <iostream>
#include <vector>
using namespace std;

int calculate(int N)
{
    int minimum = 99999;
    int max = N/3;

    for (int i = 0; i <= max; i++)
    {
        int count = 0;
        int num = N;
        for (int k = 0; k < i; k++)
        {
            num -= 3;
            count++;
        }

        while (num >= 5)
        {
            num -= 5;
            count++;
        }

        if (num == 0)
        {
            if (minimum > count)
            {
                minimum = count;
            }
        }
    }

    if (minimum == 99999)
    {
        return -1;
    }

    return minimum;
}

int main()
{
    int N;

    cin >> N;
    
    int min = calculate(N);

    cout << min;
    
    return 0;
}