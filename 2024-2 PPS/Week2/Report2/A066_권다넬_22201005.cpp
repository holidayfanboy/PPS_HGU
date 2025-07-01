#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;  

    vector<char> digits(N.begin(), N.end());  // 문자열을 벡터로 변환

    // Insertion Sort로 내림차순 정렬
    for (int i = 1; i < digits.size(); i++) {
        char key = digits[i];
        int j = i - 1;

        // 내림차순으로 정렬하므로 key보다 큰 값들을 뒤로 밀기
        while (j >= 0 && digits[j] < key) {
            digits[j + 1] = digits[j];
            j--;
        }
        digits[j + 1] = key;
    }

    // 정렬된 숫자들을 출력
    for (char digit : digits) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
