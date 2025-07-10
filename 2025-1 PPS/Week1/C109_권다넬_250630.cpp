#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <long long> cards;

int check(long long answer, int N)
{
    int start = 0;
    while (start <= N)
    {
        int mid = (start + N) /2;
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

    ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        long long input = 0;
        cin >> input;
        cards.push_back(input);
    }

    sort(cards.begin(), cards.end());
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        long long input = 0;
        cin >> input;
        int answer = check(input, N-1);
        cout << answer << " ";
    }

    return 0;
}