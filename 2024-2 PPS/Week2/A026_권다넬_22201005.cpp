#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    vector<int>a;
    int b = x;
    int sum = 0;
    while (b >= 10)
    {
        int temp = b % 10; //첫번째 수 구함
        a.push_back(temp); 
        b = b / 10; //첫번째 수 지우기
    }

    a.push_back(b); 
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
    }
    
    if (x%sum == 0) 
        return true;
    else
        return false;
}