#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    vector <int> a(N);
    vector <int> list;
    int count = 0;
    int B = N;
    
    for (int i = 0; i < N; i++)
    {
        a[i] = i+1;
    }

    while(B > 0)
    {
        count += K;
        while (count > B)
        {
            count -= B;
        }
        list.push_back(a[count-1]);
        a.erase(a.begin() + count-1);
        B--;
        count--;
    }

    cout << "<";
    for (int i = 0; i < N; i++)
    {
        if (i != N-1)
        cout << list[i] << ", ";
        else
        cout << list[i];
    }

    cout << ">";

    return 0;
}