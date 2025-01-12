#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void Numbering(int a, vector<int>&b);

int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    cin >> A >> B >> C;
    long long int sum = A * B * C;
    vector<int>sorted;
    vector<int>calculate(10);
    
    while (sum >= 10)
    {
        int temp = sum % 10;
        sorted.push_back(temp); 
        sum = sum / 10;
    }

    sorted.push_back(sum); 
    
    for (int i = 0; i < sorted.size(); i++)
    {
        Numbering(sorted[i],calculate);
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << calculate[i] << endl;
    }

    return 0;
}

void Numbering(int a, vector<int>&b)
{
    if (a == 0)
    {
        b[0]++;
    }
    else if (a == 1)
    {
        b[1]++;
    }
    else if (a == 2)
    {
        b[2]++;
    }
    else if (a == 3)
    {
        b[3]++;
    }
    else if (a == 4)
    {
        b[4]++;
    }
    else if (a == 5)
    {
        b[5]++;
    }
    else if (a == 6)
    {
        b[6]++;
    }
    else if (a == 7)
    {
        b[7]++;
    }
    else if (a == 8)
    {
        b[8]++;
    }
    else if (a == 9)
    {
        b[9]++;
    }
}
