#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, v, count = 0;

    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    cin >> v;

    for (int i = 0; i < N; i++) {
        if (numbers[i] == v) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
