#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    string input;
    cin >> input; 

    vector<string> word; 

    // 접미사를 생성 및 입력
    for (size_t i = 0; i < input.size(); i++) {
        word.push_back(input.substr(i)); 
    }

    // 사전순으로 정렬
    sort(word.begin(), word.end());

    // 접미사 출력
    for (size_t i = 0; i < word.size(); i++) {
        cout << word[i] << endl;
    }

    return 0;
}
