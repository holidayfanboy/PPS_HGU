#include <iostream>
#include <queue>

using namespace std;

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    queue<int> card;

    for (int i = 1; i <= N; i++) 
    {
        card.push(i);
    }

    while (card.size() > 1) 
    {
        int temp;
        card.pop();
        temp = card.front(); 
        card.push(temp); 
        card.pop();
    }

    cout << card.front() << '\n';
    return 0;
}
