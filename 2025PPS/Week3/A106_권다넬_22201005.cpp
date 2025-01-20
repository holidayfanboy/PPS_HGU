#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        vector <int> alphabet(26);
        for (int i = 65; i <= 90; i++)
        {   
            alphabet[i-65] = i;
        }
        string input;
        cin >> input;
        int sum = 0;
        for (int i = 0; i < input.size(); i++)
        {
            int a = input[i];
            for (int j = 0; j < alphabet.size() ; j++)
            {
                if (a == alphabet[j])
                {
                    alphabet[j] = 0;
                }
            }
        }

        for (int k = 0; k < alphabet.size(); k++)
        {
            sum += alphabet[k];
        }
        cout << sum << endl;
    }

    return 0;
}