using namespace std;
#include <math.h>

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long cost = 0;
    for (int i = 1; i <= count; i++)
    {
        cost += price * i;
    }
    answer = money - cost;
    
    if (answer > 0)
    {
        return 0;
    }
    else 
    {
        return abs(answer);
    }
}