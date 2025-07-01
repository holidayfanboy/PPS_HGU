#include <iostream>
#include <string>
using namespace std;

int main() {
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        int last = input.back() - '0'; //마지막 숫자
        if (last%2 == 0) //숫자가 짝수면 짝
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}
