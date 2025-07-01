#include <iostream>
#include <string>
using namespace std;

string solve(string text, string key) 
{
    string cipher = "";
    int length = key.size();
    int index = 0;
    
    int N = text.size(); // 평문의 길이

    for (int i = 0; i < N; i++)
	{
        char c = text[i];
        if (c == ' ') 
		{
            cipher += ' ';
        } 
		else 
		{
        
            int shift = key[index] - 'a' + 1;
           
            char encryptedChar = c - shift;
            if (encryptedChar < 'a') {
                encryptedChar += 26;  // 알파벳 순서를 벗어나면 'z'
            }
            cipher += encryptedChar;
            
            // 순차적으로 변경
            index = (index + 1) % length;
        }
    }

    return cipher;
}

int main() 
{
    string text, key;
    getline(cin, text);  
    getline(cin, key);        

    string encrypt = solve(text, key);
    cout << encrypt << endl;

    return 0;
}
