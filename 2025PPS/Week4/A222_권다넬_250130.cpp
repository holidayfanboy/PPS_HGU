#include <iostream>

using namespace std;

// 팩토리얼
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) 
    {
        result *= i;
    }

    return result;
}

// 이항 계수 계산
int bion(int N, int K) 
{
    return factorial(N) / (factorial(K) * factorial(N - K));
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << bion(N, K) << endl;
    return 0;
}
