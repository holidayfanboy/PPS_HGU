#include <iostream>
using namespace std;

int main() {
    int N = 0; //콘센트 개수
    cin >> N;
    int maxA = 0;  

    for (int i = 0; i < N; i++) {
        int plug;
        cin >> plug; //플러그 수 입력

        maxA += plug; //수 만큼 증가
        if (i != N-1) //마지막 멀티탭이 아닐때
            maxA--; //1개 감소
    }

    cout << maxA << endl;

    return 0;
}
