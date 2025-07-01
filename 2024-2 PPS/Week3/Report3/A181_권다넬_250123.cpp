#include <iostream>
using namespace std;

int main() 
{
    int a = 0, b = 0;
    cin >> a >> b;
    cout << a * (b%10) << endl;
    cout << a * ((b/10)%10) << endl;
    cout << a * (b/100) << endl;
    cout << a * b;
    return 0;
}