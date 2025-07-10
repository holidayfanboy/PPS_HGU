#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    long long K;
    cin >> N >> K;
    vector <long long> coin(N+1);

    for (int i = 0; i < N; i++)
    {
        long long input = 0;
        cin >> input;
        coin[i] = input;
    }
    coin[N] = 99999999999;

    int count = 0;
    int loc = 0;

    while (K > 0)
    {
        if (K == coin[loc+1])
        {
            K -= coin[loc+1];
            count++;
        }
        else if ((coin[loc] <= K) && (K < coin[loc+1]))
        {
            K -= coin[loc];
            count++;
        } 
        else if (coin[loc] > K)
        {
            loc--;
        }
        else if ((coin[loc] < K) && (coin[loc+1] < K))
        {
            loc++;
        }
    }

    cout << count;
    return 0;
}