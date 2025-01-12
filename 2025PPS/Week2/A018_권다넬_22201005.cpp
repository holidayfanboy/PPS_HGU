#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define NSIZE 50
#define LIMIT 100

int main()
{
    int N = 0;
    vector<int>A;  
    vector<int>B;
    cin >> N;
    if (N > NSIZE)
    {
        N = NSIZE;
    }

    for (int i = 0; i < N; i++)
    {
        int inputA = 0;
        cin >> inputA;
        if (inputA <= 100)
        {
            A.push_back(inputA);
        }
        else
        {
            A.push_back(LIMIT);
        }
    }

    for (int i = 0; i < N; i++)
    {
        int inputB = 0;
        cin >> inputB;
        if (inputB <= 100)
        {
            B.push_back(inputB);
        }
        else
        {
            B.push_back(LIMIT);
        }
    }
    
    return 0;
}
