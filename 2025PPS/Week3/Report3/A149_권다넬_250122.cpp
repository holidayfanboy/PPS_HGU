#include <iostream>
#include <vector>
using namespace std;

class profile {
    int weight;
    int height;
    int rank;
    public:
    profile();
    void update(int a);
    void update(int a, int b);
    int giverank();
    friend bool compare (profile a, profile b);
};

profile :: profile() 
{
    weight = 0;
    height = 0;
    rank = 1;
}

void profile :: update(int a) //랭크 입력
{
    rank += a;
}

void profile :: update(int a, int b) //무게 키 입력
{
    weight = a;
    height = b;
}

bool compare (profile a, profile b) //무게와 키 구분
{
    if (a.weight < b.weight && a.height < b.height)
        return true;
    return false;
}

int profile :: giverank() //랭크 값 리턴
{
    return rank;
}

int main()
{
    int N;
    cin >> N;
    vector <profile> list(N);
    for (int i = 0; i < N; i++) //무게와 키 N개 입력
    {
        int inputw, inputh;
        cin  >> inputw >> inputh;
        list[i].update(inputw, inputh);
    }

    for (int i = 0; i < N; i++) //i 사람을 모든 사람과 비교
    {
        int num = 0;
        for (int k = 0; k < N; k++)
        {
            if (k == i)
            {
            
            }
            else 
            {
                if (compare(list[i],list[k]))
                {
                    num++;
                }
            }
        }
        list[i].update(num);
    }

    for (int i = 0; i < N; i++) //결과 출력
    {
        int a = 0;
        a = list[i].giverank();
        cout << a << " ";
    }
}