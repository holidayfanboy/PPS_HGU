#include <iostream>
using namespace std;

void Factor(int a) {
    while (a % 2 == 0) {
        cout << 2 << '\n';
        a /= 2;
    }
    
    // 3부터 홀수로 나누기 (i += 2로 홀수만 체크)
    for (int i = 3; i * i <= a; i += 2) {
        while (a % i == 0) {
            cout << i << '\n';
            a /= i;
        }
    }
    
    // 남은 N이 소수인 경우
    if (a > 1) {
        cout << a << '\n';
    }
}

int main() {
    int N;
    cin >> N;
    
    if (N > 1) {
        Factor(N);
    }
    
    return 0;
}
