#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 숫자를 영어로 변환하는 함수
string numberToWords(int num) {
    string words[] = {"zero", "one", "two", "three", "four", 
                      "five", "six", "seven", "eight", "nine"};
    string result;
    if (num >= 10) result += words[num / 10] + " "; // 십의 자리
    result += words[num % 10]; // 일의 자리
    return result;
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<pair<string, int>> num;

    // 숫자를 영어로 변환하고 저장
    for (int i = M; i <= N; i++) {
        num.push_back({numberToWords(i), i});
    }

    // 사전순으로 정렬
    sort(num.begin(), num.end());

    // 출력
    for (size_t i = 0; i < num.size(); i++) {
        cout << num[i].second; // 정렬된 원래 숫자 출력
        if ((i + 1) % 10 == 0 || i == num.size() - 1) {
            cout << endl; // 10개씩 출력 후 줄바꿈
        } else {
            cout << " ";
        }
    }

    return 0;
}
