#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Groupornot(vector<int>&a);

int main()
{
    int N = 0;
    cin >> N;
    int count = 0;

    for (int i = 0; i < N; i++) //N 값 입력 문자 받고 그룹 단어인지 파악
    {
        vector<int> check;
        string input;
        cin >> input;
        for (int j = 0; j < input.size(); j++)
        {
            int c = input[j];
            if (check.empty() || c != check.back())
            {
                 //소문자 대문자 전부 다 대문자로 변경
                check.push_back(c);
            }
        }

        sort(check.begin(), check.end()); //정렬

        if(Groupornot(check)) //true 면 카운트 증가
        {
            count++;
        }   
    }

    cout << count; //최종 카운트 출력

    return 0;
}

bool Groupornot(vector<int>&a)
{
    //정렬된 벡터에서 같은 숫자가 있으면 false 아니면 true
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i-1]) 
        {
            return false;
        }
    }
    return true;
}