#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> notes(8);
    
    for (int i = 0; i < 8; i++) {
        cin >> notes[i];
    }

    bool isAscending = true;
    for (int i = 0; i < 7; i++) {
        if (notes[i] + 1 != notes[i + 1]) {
            isAscending = false;
            break;
        }
    }

    bool isDescending = true;
    for (int i = 0; i < 7; i++) {
        if (notes[i] - 1 != notes[i + 1]) {
            isDescending = false;
            break;
        }
    }

    if (isAscending) {
        cout << "ascending" << endl;
    } else if (isDescending) {
        cout << "descending" << endl;
    } else {
        cout << "mixed" << endl;
    }

    return 0;
}
