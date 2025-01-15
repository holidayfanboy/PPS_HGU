#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word; 
    for (int i = 0; i < word.size(); i++)
    {
        
        char c = word[i]; 
        cout << c;
        if (i != 0 && (i+1)%10 == 0)
        {
            cout << endl;
        }
    }
    

    return 0;
}

