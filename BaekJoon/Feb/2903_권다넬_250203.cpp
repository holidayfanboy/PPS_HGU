#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int side = 1;
    int side2 = 1;
    for (int i = 0; i < N; i++)
    {
        side2 = side2 * 2;
    }
    side += side2;
    cout << side * side << endl;
    return 0;
}