#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int N;
    int count = 1;  
    int topcount = 1;
    vector<int> num;
    int six = 0;
    cin >> N;

    while (N >= 10)
    {
        long int temp = N % 10;
        if (temp == 6 || temp == 9)
        {
            six++;
        }
        else
        {
            num.push_back(temp); 
        }
        N = N / 10;
    }

    if (N == 6 || N == 9)
    {
        six++;
    }
    else
    {
        num.push_back(N); 
    }

    sort(num.begin(), num.end());

    six = (six % 2 == 0) ? six / 2 : six / 2 + 1;

    for (int i = 1; i < num.size(); i++)
    {
        if (num[i] == num[i-1])
        {
            count++;
        }
        else
        {
            topcount = max(topcount, count);
            count = 1;  
        }
    }
    topcount = max(topcount, count);  

    topcount = max(topcount, six);

    cout << topcount << endl;
    return 0;
}
