#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;

int main() 
{
    string input;
    cin >> input;

    vector <int> translate;
    for (int i = 0; i < input.size(); i++)
    {
        int word;
        word = input[i];
        if (word <= 67 && word >= 65) //A 에서 C 까지 (65 66 67) => (88 89 90)
        {
            word = word + 23;
        } 
        else 
        {
            word = word - 3;
        }

        translate.push_back(word); 
    }

    for (int i = 0; i < translate.size(); i++)
    {
        printf("%c", translate[i]);
    }

    return 0;
}
