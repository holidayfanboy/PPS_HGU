#include <iostream>
using namespace std;

bool flip(int n) {
    int original = n;
    int reversed = 0;
    
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int reverseInt(int n) {
    int digits[6];
    int size = 0;
    
    while (n > 0) {
        digits[size++] = n % 10;
        n /= 10;
    }

    int reversed = 0;
    for (int i = 0; i < size; i++) {
        reversed = reversed * 10 + digits[i];
    }

    return reversed;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int reversed = reverseInt(N);
        int total = N + reversed;

        if (flip(total)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
