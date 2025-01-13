#include <iostream>
#include <algorithm> // for std::max

using namespace std;

int main() {
    int maxA = 0; 
    int people = 0; 

    for (int i = 0; i < 4; i++) {
        int out, in;
        cin >> out >> in; // 내린 사람 수와 탄 사람 수 입력

        people -= out; // 내린 사람 수만큼 현재 인원을 감소
        people += in;  // 탄 사람 수만큼 현재 인원을 증가

        maxA = max(maxA, people); // 최대 인원 갱신
    }

    cout << maxA << endl;

    return 0;
}
