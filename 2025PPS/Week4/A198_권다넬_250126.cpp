#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(long long length, int S, int C, vector<long long>& leeks) 
{
    long long count = 0;
    for (int i = 0; i < leeks.size(); i++) 
    {
       count += leeks[i] / length; // 해당 길이로 만들 수 있는 파닭 개수
    }
    return count >= C;  // 주문량을 충족하는지 확인
}

int main() 
{
    int S, C;
    cin >> S >> C;
    vector<long long> leeks(S);
    long long totalLength = 0;
    
    for (int i = 0; i < S; i++)
    {
        cin >> leeks[i];
        totalLength += leeks[i];
    }

    long long left = 1, right = *max_element(leeks.begin(), leeks.end());
    long long bestLength = 0;

    while (left <= right) 
    {
        long long mid = (left + right) / 2;
        if (isPossible(mid, S, C, leeks))
        {
            bestLength = mid;
            left = mid + 1;  // 더 긴 길이를 시도
        } 
        else 
        {
            right = mid - 1; // 더 짧은 길이를 시도
        }
    }

    // 남은 파 계산
    long long usedLeeks = bestLength * C;
    long long leftover = totalLength - usedLeeks;
    
    cout << leftover << endl;

    return 0;
}
