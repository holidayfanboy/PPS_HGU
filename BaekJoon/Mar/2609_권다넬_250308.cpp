#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b = 0;
    cin >> a >> b;

    a > b ? a = b : a = a;

    while (a%b != 0)
    {
        a = a%b;
    }

    return 0;
}
