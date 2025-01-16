#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int totalTime = 0;

    // 각 알파벳에 대해 해당하는 다이얼 시간 추가
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 'A' && word[i] <= 'C') 
        {
            totalTime += 3;
        } 
        else if (word[i] >= 'D' && word[i] <= 'F') 
        {
            totalTime += 4;
        } 
        else if (word[i] >= 'G' && word[i] <= 'I') 
        {
            totalTime += 5;
        } 
        else if (word[i] >= 'J' && word[i] <= 'L') 
        {
            totalTime += 6;
        } 
        else if (word[i] >= 'M' && word[i] <= 'O') 
        {
            totalTime += 7;
        } 
        else if (word[i] >= 'P' && word[i] <= 'S') 
        {
            totalTime += 8;
        } 
        else if (word[i] >= 'T' && word[i] <= 'V') 
        {
            totalTime += 9;
        } 
        else if (word[i] >= 'W' && word[i] <= 'Z') 
        {
            totalTime += 10;
        }
    }

    cout << totalTime << endl;
    return 0;
}
