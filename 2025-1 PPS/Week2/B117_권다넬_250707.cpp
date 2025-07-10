#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> inOrder(N);   
    unordered_map<string, int> inPos; 

    for (int i = 0; i < N; ++i) {
        cin >> inOrder[i];
        inPos[inOrder[i]] = i;
    }

    vector<int> outOrder(N);
    for (int i = 0; i < N; ++i) {
        string carNum;
        cin >> carNum;
        outOrder[i] = inPos[carNum];
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (outOrder[i] > outOrder[j]) {
                count++;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}
