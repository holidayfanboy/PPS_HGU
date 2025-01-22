#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> num(N);
    
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    
    // 가장 큰 두 수를 찾기 위해 정렬
    sort(num.begin(), num.end());
    
    // 가장 큰 두 수의 합 계산
    int max = num[N - 1] + num[N - 2];
    
    cout << max << endl;
    return 0;
}
