#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int quarter = 0;
        int dime = 0;
        int nickel = 0;
        int penny = 0;
        int money = 0;
        cin >> money;
        while (true)
        {
            if (money >= 25)
            {
                quarter++;
                money -= 25;
            }
            else if (money >=10)
            {
                dime++;
                money -= 10;
            }
            else if (money >= 5)
            {
                nickel++;
                money -= 5;
            }
            else if (money > 0)
            {
                penny++;
                money -= 1;
            }
            else
            {
                break;
            }
        }
        cout << quarter << " " <<dime << " " << nickel  << " " << penny << endl;
    }
    return 0;
}