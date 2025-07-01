#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int max = -1;
    int sum = 0;
    //동그란 길이면 가장 큰 길만 제외 하면 된다
    for (int i = 0; i < N; i++)
    {
        int vi;
        cin >> vi;
        if (vi > max)
        {
            max = vi;
        }
        sum += vi;
    }
    sum -= max; //모든 합에서 가장 큰 킬 제외
    cout << sum; //결과 출력

    return 0;
}