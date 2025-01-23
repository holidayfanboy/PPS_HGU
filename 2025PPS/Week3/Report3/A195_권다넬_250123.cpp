#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // 사용자로부터 숫자 입력 받기

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // 줄바꿈
    }

    return 0;
}
