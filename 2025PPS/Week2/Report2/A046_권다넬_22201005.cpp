#include <iostream>
#include <cstdio>
using namespace std;
#define AlphabetNum 26

int main() {
    int N;
    cin >> N;
    int alphabet[AlphabetNum] = {0};
    bool gg = false;
    //Ascii 코드로 알파벳 위치에 저장 (a = 0, b = 1 ....)
    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word; 
        int c = word[0]; 
        c = c - 97;
        alphabet[c]++;
    }
    
    //알파벳이 5개 이상이면 그 단어 출력
    for (int i = 0; i < AlphabetNum; i++)
    {
        if(5 <= alphabet[i])
        {
            printf("%c", i+97);
            gg = true;
        }
    }

    //gg가 false 면 -> 알파벳 5개 이상이 없음 항복
    if (!gg)
    {
        cout << "PREDAJA";
    }

    return 0;
}

