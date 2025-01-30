#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int candy = 0;
        int child = 0;
        cin >> candy >> child;
        int you;
        int dad;
        you = candy/N;
        dad = candy%N;

        cout << "You get " << you << " piece(s) and your dad gets " << dad << " piece(s).";
    }

    return 0;
}