#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> cards[i];
    }

    int max = 0;

    for (int i = 0; i < N - 2; i++) 
    {
        for (int j = i + 1; j < N - 1; j++) 
        {
            for (int k = j + 1; k < N; k++) 
            {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= M && sum > max) 
                {
                    max = sum;
                }
            }
        }
    }

    cout << max << endl;

    return 0;
}