#include <iostream>
using namespace std;

int main()
{
    //1 6 12 18 24 30
    int N; //입력한 값
    cin >> N;
    int area = 1;
    int count = 1; //범위
    while (N > area)
    {
        for (int i = 0; i < count; i++)
        {
            area += 6;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}