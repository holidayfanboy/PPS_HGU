#include <iostream>
#include <string>
using namespace std;

int main()
{
    string B;
    int N;
    long long result = 0;
    cin >> B >> N;
    for (int i = 0; i < B.size(); i++)
    {
        int num = 0;
        long long tenth = 1;
        //A가 10 B 11 C 12 .. Z 35
        if ((int)B[i] - 55 < 10)
        {
            num = B[i] - 48;
        }
        else
        {
           num = B[i] - 55;
        }
        //10진법 ZZZZZ => 36^4 36^3 36^2 36^1 36^0
        for (int a = B.size() - 1; a > i; a--)
        {
            tenth = tenth * N;
        }

        result += tenth * num;
    }
        cout << result << endl;

    return 0;
}