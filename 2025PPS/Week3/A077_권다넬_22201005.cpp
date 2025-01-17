#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class list {
    int score; //점수
    int num; //개인 번호
    public:
    list();
    void addnum(int x, int y);
    friend void Sort(list a[]);
    friend void Score(list a[]);
};

list::list()
{
    score = 0;
    num = 0;
}
void list::addnum(int x, int y)
{
    score = x;
    num = y;
}

int main()
{
    list board[8];

    for (int i = 0; i < 8; i++)
    {
        int N;
        cin >> N;
        board[i].addnum(N, i+1); //board 위치 상관 없이 점수 + 개인번호 저장
    }

    Sort(board);
    Score(board);

    return 0;
}

void Sort(list a[])
{
    //board 에서 가장 큰 수가 뒤에 가게 정리
    for (int i = 7; i >= 0; i--)
    {
        int max = -1;
        int loc = 0;
        for (int j = i; j >= 0; j-- )
        {
            if (max < a[j].score)
            {
                max = a[j].score;
                loc = j;
            }
        }
        list temp;
        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }
}

void Score(list a[])
{
    int scoresum = 0;
    vector<int>scorenum;
    for (int i = 3; i < 8; i++) //가장 큰 숫자 5개만 총합에 포함
    {
        scoresum += a[i].score;
        scorenum.push_back(a[i].num); //개인 번호 따로 저장
    }

    cout << scoresum << endl; 
    sort(scorenum.begin(), scorenum.end()); //개인 번호 순대로 정렬

    for (int a:scorenum)
    {
        cout << a << " ";
    }
}