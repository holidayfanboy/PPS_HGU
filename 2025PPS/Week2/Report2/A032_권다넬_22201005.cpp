#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int k, n;
        cin >> k >> n;

        // 아파트 배열 초기화
        vector<vector<int>> apartment(k + 1, vector<int>(n + 1, 0));

        // 0층 초기화
        for (int i = 1; i <= n; i++) {
            apartment[0][i] = i;
        }

        // 아파트 인구 계산
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                apartment[i][j] = apartment[i][j - 1] + apartment[i - 1][j];
            }
        }

        cout << apartment[k][n] << endl;
    }

    return 0;
}