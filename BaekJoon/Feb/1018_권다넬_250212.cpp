#include <iostream>
using namespace std;
#define MAX 8

int calculate(char list[][50], int startx, int starty, int M)
{
    int result = 0;
    char prev = list[startx][starty];
    for (int i = startx; i < MAX+startx; i++)
    {
        for (int k = starty; k < MAX+starty; k++)
        {
            if(list[i][k] == prev && k != starty)
            {
                result++;
                if ((k+1 <= M) && (list[i][k+1] == prev)) //연속으로 3개가 같을 때
                {
                    if (prev == 'W')
                    {
                        prev = 'B';
                    }
                    else
                    {
                        prev = 'W';
                    }
                }
            }
            else 
            {
                prev = list[i][k];
            }
        }
    }
    return result; 
}

int main()
{
    int N, M;

    cin >> N >> M;
    
    char board[50][50];

    int minimumchange = 9999999;

    //보드 값 입력 받음
    for (int i = 0 ; i < N; i++)
    {
        for (int k = 0; k < M; k++)
        {
            char input = 0;
            cin >> input;
            board[i][k] = input;
        }

    }

    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < M; k++)
        {
            if ((N - i >= 8) && (M - k >= 8))
            {
                int num = calculate(board, i, k, M);
                if (num < minimumchange)
                {
                minimumchange = num;
                }
            }
        }
    }

    cout << minimumchange;

    return 0;
}