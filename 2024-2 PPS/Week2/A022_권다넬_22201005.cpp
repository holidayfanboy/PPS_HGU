#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; // 횟수
    cin >> N;

    vector<int> T(N); // 통화 시간 
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int Y = 0; // 영식 
    int M = 0;  // 민식 

    for (int i = 0 ; i < N; i++) {
        Y += (T[i] / 30 + 1) * 10; // 30초마다 10원
        M += (T[i] / 60 + 1) * 15;  // 60초마다 15원
    }

    if (Y < M) {
        cout << "Y " << Y << endl;
    } else if (M < Y) {
        cout << "M " << M << endl;
    } else {
        cout << "Y M " << Y << endl;
    }

    return 0;
}
