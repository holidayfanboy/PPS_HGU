#include <iostream>
using namespace std;

int main()
{
    int maxScore = 0; // 최대 점수
    int winner = 0;   // 우승자 번호

    for (int i = 1; i <= 5; i++) 
    {
        int totalScore = 0; // 참가자 별 총점
        for (int j = 0; j < 4; j++) 
        {
            int score;
            cin >> score;
            totalScore += score; // 총점 계산
        }

        if (totalScore > maxScore)
        {
            maxScore = totalScore;
            winner = i;
        }
    }

    cout << winner << " " << maxScore << endl;

    return 0;
}
