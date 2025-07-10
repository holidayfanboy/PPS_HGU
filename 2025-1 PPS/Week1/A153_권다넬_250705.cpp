#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 0;
    cin >> N;
    vector<int>people(N);
    
    for (int i = 0; i < N; i++)
    {
        int input = 0;
        cin >> input;
        people[i] = input;
    }

    sort(people.begin(),people.end());
    
    int sum = 0;
    int nextp = 0;
    for (int i = 0; i < N; i++)
    {
        nextp += people[i];
        sum += nextp;
    }

    cout << sum << '\n';
    return 0;
}