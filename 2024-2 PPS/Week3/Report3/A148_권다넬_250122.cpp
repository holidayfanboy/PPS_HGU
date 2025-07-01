#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string input;
    
    getline(cin,input);
    int count = 0;
    bool check = false;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] != ' ' && i == 0) //첫 단어가 글자면 카운트
        {
            count++;
        }

        if (input[i] == ' ') //공백이 나오면 다음에 글자가 나오는지 체크
        {
            check = true;
        }

        if (check != false) //글자가 나오면 +1
        {
            if (input[i] != ' ')
            {
                count++;
                check = false; //공백이 나올때 까지 다시 false
            }
        }
    }  

    cout << count << endl;
    return 0;
}