#include <iostream>
#include <string>
#include <cctype> 
#include <cstdio>
using namespace std;
#define AlphabetNum 26

int main() {
    string word;
    cin >> word; 
    int max = 0;
    int loc = 0;
    int count = 0;
    int alphabet[AlphabetNum] = {0};

    //Ascii 코드로 알파벳 위치에 저장 (A = 0, B = 1 ....)
    for (int i = 0; i < word.size(); i++)
    {
        int c = toupper(word[i]); 
        c = c - 65;
        alphabet[c]++;
    }
    
    //가장 많이 나온 알파벳 구별
    for (int i = 0; i < AlphabetNum; i++)
    {
        if(max < alphabet[i])
        {
            max = alphabet[i];
            loc = i;
            count = 1;
        }
        else if (alphabet[i] == max)
        {
            count++;
        }
    }

    //결과물 출력 (가장 많이 나온 알파벳이 2개 이상이면 ? 출력
    if (count == 1)
    {
        printf("%c", loc+65);
    }
    else
    {
        cout << "?";
    }

    return 0;
}

