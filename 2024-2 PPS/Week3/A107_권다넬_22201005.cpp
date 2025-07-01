#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    cin >> A >> B;

    vector <int> num;
    int count = 0;
    int i = 0;

    while (count < B)
    {
        i++;
        for (int j = 1; j <= i; j++)
        {
            if (count >= B)
            break;

            num.push_back(i);
            count++;
        }
    }

    int sum = 0;
    for (int k = A - 1; k < B; k++)
    {
        sum += num[k];
    }

    cout << sum << endl;
    return 0;
}