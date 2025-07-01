#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // 테스트 케이스의 개수
    cin >> T;

    for (int t = 0; t < T; t++) {
        string quiz; // OX 퀴즈 결과
        cin >> quiz;

        int score = 0; // 총 점수
        int current_streak = 0; // 연속된 O의 개수

        for (int i = 0; i < quiz.size(); i++) {
            if (quiz[i] == 'O') {
                current_streak++; // O일 경우 연속 개수 증가
                score += current_streak; // 현재 연속 개수를 점수에 추가
            } else {
                current_streak = 0; // X일 경우 연속 개수 초기화
            }
        }

        cout << score << endl; // 결과 출력
    }

    return 0;
}
