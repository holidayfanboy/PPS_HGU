#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N = 0;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    //A 값 받음
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    //B 값 받음
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    //A 내림차 순 정렬 , B 오림차순 정렬
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    int S = 0;
    //A 가장 작은 것과 B 가장 큰 것 곱셈
    for (int i = 0; i < N; i++) {
        S += A[i] * B[i];
    }

    cout << S << endl;

    return 0;
}
