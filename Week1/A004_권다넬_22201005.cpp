#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int a = arr.size();
    int j = 0;
    for (int i = a-1; i >= 0; i--)
    {
        int best = -1;
        int temp = 0;
        int num = 0;
        for (j = i; j >= 0; j--)
        {
            if(best < arr[j])
            {
                best = arr[j];
                num = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[num];
        arr[num] = temp;
    }
    
    for (int i = 0; i < a; i++)
    {
        if(arr[i]%divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    return answer;
}