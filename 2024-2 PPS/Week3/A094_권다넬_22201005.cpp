#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cin >> input;
    int count = 0;
    
    for (int i = 0; i < input.size(); i++) 
    {
        count++;
        if (input[i] == '=')
        {
            if (input[i-1] == 'z' && input[i-2] == 'd')
            count -= 2;
            else if ((input[i-1] == 'c')  || (input[i-1] == 's') || (input[i-1] == 'z')) 
            count--;
        }

        if (input[i] == '-')
        {
            if((input[i-1] = 'd') || (input[i-1] = 'c'))
            count--;
        }

        if (input[i] == 'j')
        {
            if((input[i-1] == 'l') || (input[i-1] == 'n'))
            count--;
        }
    }
    
    cout << count;

    return 0;
}
