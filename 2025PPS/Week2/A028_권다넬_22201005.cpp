#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string A, B; // 두 큰 수를 문자열로 입력받음
    cin >> A >> B;

    // 두 문자열의 길이를 맞추기 위해 앞쪽에 0을 채움
    if (A.size() < B.size()) {
        A.insert(A.begin(), B.size() - A.size(), '0');
    } else if (B.size() < A.size()) {
        B.insert(B.begin(), A.size() - B.size(), '0');
    }

    string result = ""; // 결과를 저장할 문자열
    int carry = 0;      // 자리 올림 값

    // 뒤에서부터 각 자리수를 더함
    for (int i = A.size() - 1; i >= 0; i--) {
        int sum = (A[i] - '0') + (B[i] - '0') + carry;
        carry = sum / 10;         // 올림값 계산
        result += (sum % 10) + '0'; // 현재 자리 값 추가
    }

    // 마지막 자리 올림이 남아있으면 추가
    if (carry > 0) {
        result += carry + '0';
    }

    // 결과 문자열을 뒤집어 출력
    reverse(result.begin(), result.end());
    cout << result << endl;

    return 0;
}
