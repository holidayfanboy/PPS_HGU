#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        vector <int> answer;
        int a , b;
        cin >> a >> b;
        int c = a;
        int d = b;
        while (c <= 45000 || d <= 45000)
        {
            if (c%b == 0)
            {
                answer.push_back(c);
                c += a;
                d += b;
            }
            else if (d%a == 0)
            {
                answer.push_back(d);
                c += a;
                d += b;
            }
            else
            {
                c += a;
                d += b;
            }
        }
        
        sort(answer.begin(), answer.end());
        if (answer.size() > 0)
        {
            cout << answer[0] << endl;
        }
    }
}