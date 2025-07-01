#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector <int> list(N);

    for (int i = 0; i < N; i++) //숫자 입력 N개 만큼
    {
        cin >> list[i];
    }

    stack <int> num; //스택 생성
    sort(list.begin(), list.end(), greater<int>()); //큰 수부터 작은 수까지 정렬

    for (int i = 0; i < N; i++)
    {
        if (num.empty()) //스택 비어있으면 푸시
        {
            num.push(list[i]);
        }
        else if (num.top() != list[i]) //스택 탑이 숫자가 다르면 푸시
        {
            num.push(list[i]);
        }
    }

    while(!num.empty()) //스택 출력
    {
        cout << num.top() << " ";
        num.pop();
    }

    return 0;
}