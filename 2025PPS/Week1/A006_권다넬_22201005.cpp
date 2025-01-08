#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int a = s.size();
    int p = 0;
    int y = 0;
    for (int i = 0; i <= a; i++)
    {
        char c = s[i];
        switch(c) {
            case 'p':
                p++;
        break;
        case 'P':
        p++;
        break;
        case 'y':
        y++;
        break;
            case 'Y':
        y++ ;
            break;
        }
    }
    
    if (p != y)
        return 0;
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}