#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Passwordtest(string &input)
{
    int vcount = 0; // 모음 연속 계산
    int ccount = 0; // 자음 연속 계산
    bool count = false; // 같은 단어 2번 인지
    bool vowel = false; 
    char prev;
    //모음이 있나 검사
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'a' || input[i]  == 'e' || input[i]  == 'i' || input[i]  == 'o' || input[i]  == 'u')
        {
            vowel = true;
            break;
        }
    }

    if (!vowel)
    {
        cout << "<" << input << "> is not acceptable." << endl;
        return;
    }

    for (int i = 0; i < input.size(); i++)
    {
        //세번 연속 검사
        if (input[i] == 'a' || input[i]  == 'e' || input[i]  == 'i' || input[i]  == 'o' || input[i]  == 'u')
        {
            vcount++;
            ccount = 0;
        }
        else
        {
            ccount++;
            vcount = 0;
        }

        //두번 연속 같은 단어 검사
        if (input[i] == prev) 
        {
            count = true;
        }

        //세번 연속일시 fail
        if (vcount >= 3 || ccount >= 3)
        {
            cout << "<" << input << "> is not acceptable." << endl;
            return;
        }
        //두번 연속일시 fail (oo 나 ee 는 예외)
        if (count)
        {
            if ((prev == 'e' && input[i] == 'e')|| (prev == 'o' && input[i] == 'o'))
            {
                count = false;
            }
            else 
            {
                cout << "<" << input << "> is not acceptable." << endl;
                return;
            }
        }

        prev = input[i];
    }

    cout << "<" << input << "> is acceptable." << endl;
}

int main()
{

    while (true)
    {
        string input;
        cin >> input;
        if (input == "end")
        {
           break;
        }
        Passwordtest(input);
    }
    return 0;
}
