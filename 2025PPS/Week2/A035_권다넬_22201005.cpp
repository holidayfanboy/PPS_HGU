#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int T;
    cin >> T; 

    for (int i = 0; i < T; i++) {
        double result;
        char op;
        cin >> result; // 첫 번째 수 입력 받기

        while (cin >> op) { // 연산자 읽기
            if (op == '@') {
                result *= 3;
            } else if (op == '%') {
                result += 5;
            } else if (op == '#') {
                result -= 7;
            }
            if (cin.peek() == '\n') break; // 개행 문자 확인
        }

        // 소수점 둘째 자리까지 출력
        cout << fixed << setprecision(2) << result << endl;
    }

    return 0;
}
