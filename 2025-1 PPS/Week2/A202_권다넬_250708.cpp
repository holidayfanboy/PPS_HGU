#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    string result = "";
    string current_word = "";
    bool in_tag = false;

    for (char c : s) {
        if (c == '<') {
            if (!in_tag) {
                reverse(current_word.begin(), current_word.end());
                result += current_word;
                current_word = "";
            }
            in_tag = true;
            result += c;
        } else if (c == '>') {
            in_tag = false;
            result += c;
        } else if (in_tag) {
            result += c;
        } else {
            if (c == ' ') {
                reverse(current_word.begin(), current_word.end());
                result += current_word;
                result += c;
                current_word = "";
            } else {
                current_word += c;
            }
        }
    }

    if (!current_word.empty()) {
        reverse(current_word.begin(), current_word.end());
        result += current_word;
    }

    cout << result << endl;

    return 0;
}