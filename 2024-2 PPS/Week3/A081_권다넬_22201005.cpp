#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define N 3

int main()
{
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        vector <int> A(10);
        for (int j = 0; j < A.size(); j++)
        {
            cin >> A[j]; //배열에 10개 번호 받음
        }
        sort(A.begin(), A.end()); //작은순에서 큰순 정렬
        cout  << A[10-N] << endl; //3번째로 큰 수 출력
    }

    return 0;
}