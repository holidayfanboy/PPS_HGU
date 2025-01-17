#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> Jose;
    for (int i = 1; i <= N; i++) {
        Jose.push_back(i);
    }

    vector<int> result;
    int count = 0;

    while (!Jose.empty()) {
        count = (count + K - 1) % Jose.size(); // K번째 사람의 인덱스 계산
        result.push_back(Jose[count]);        // 제거된 사람 저장
        Jose.erase(Jose.begin() + count);     // 제거
    }

    // 요세푸스 순열 출력
    cout << "<";
    for (size_t i = 0; i < result.size(); i++) {
        if (i > 0) cout << ", ";
        cout << result[i];
    }
    cout << ">" << endl;

    return 0;
}
