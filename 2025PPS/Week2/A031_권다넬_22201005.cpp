#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int answer;

    //일단 한 부분으로만 토막 냄 (가로 세로)
    answer = N > M ? N-1 : M-1;
    

    //토막 낸 것들을 나머지 열 만큼 토막 내기
    if (answer == M - 1)
    {
        answer += M*(N-1);
    }
    else
    {
        answer += N*(M-1);
    }

    cout << answer;
    
    return 0;
}