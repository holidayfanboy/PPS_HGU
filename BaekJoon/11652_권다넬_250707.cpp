#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    unordered_map<long long, int> table;
    long long input = 0;
    int answer = 0; 
    long long answerkey = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        table[input]++;

        if (table[input] > answer)
        {
            answerkey = input;
            answer = table[input];
        }
        else if (table[input] == answer && input < answerkey)
        {
            answerkey = input;
        }
    }

    cout << answerkey;
    return 0;	
}
