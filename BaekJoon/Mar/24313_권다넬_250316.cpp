#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int Aone, Atwo;
    int c;
    int n;
    cin >> Aone >> Atwo;
    cin >> c >> n;

    if (Aone*n + Atwo > c*n)
    {
        cout << "0" << '\n';
    }
    else
    {
        cout << "1" << '\n';
    }
    return 0;
}
