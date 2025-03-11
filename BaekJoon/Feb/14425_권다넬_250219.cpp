#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector <string> cards;

int check(string answer, int N)
{
    int start = 0;
    while (start <= N)
    {
        int mid = (start + N) / 2;
        if (cards[mid] == answer)
        {
            return 1;
        }
        else if (cards[mid] > answer)
        {
            N = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return 0;
}

int main()
{
    int N = 0;
    int M = 0;
    
    vector <int> answers;
    cin >> N >> M;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        cards.push_back(input);
    }

    sort(cards.begin(), cards.end());

    for (int i = 0; i < M; i++)
    {
        string input;
        cin >> input;
        int a = check(input, N-1);
        if (a == 1)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}