#include <iostream>
#include <string>
using namespace std;
#define title "666"

int main()
{
    int N;
    cin >> N;
    int count = 0;
    int num = 665;
    int result;
    while (count != N)
    {
        string check = to_string(num);   
        
        if (check.find("666") != -1 )
        {
            count++;
            result = num;
        }
        num++;
    }

    cout << result;
    return 0;
}