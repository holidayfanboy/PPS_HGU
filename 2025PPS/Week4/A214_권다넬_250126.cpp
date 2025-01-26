#include <iostream>
#include <string>
using namespace std;

int main() {
    string kda;
    cin >> kda;

    int K = 0, D = 0, A = 0;
    int value = 0; 
    int part = 0;  // 0: K, 1: D, 2: A를 구분

    for (int i = 0; i < kda.size(); i++) 
    {
        if (kda[i] == '/') 
        {
            if (part == 0) K = value;
            else if (part == 1) D = value;
            value = 0; 
            part++; 
        }
        else
        {
            value = value * 10 + (kda[i] - '0');
        }
    }
    
    A = value;

    if (K + A < D || D == 0) 
    {
        cout << "hasu" << endl;
    } 
    else
    {
        cout << "gosu" << endl;
    }

    return 0;
}
