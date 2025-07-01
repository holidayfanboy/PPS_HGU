#include <iostream>
#include <string>
#include <iomanip>  

using namespace std;

int main() {
    string grade;
    cin >> grade;

    double score = 0.0;

    // 첫 번째 문자가 A, B, C, D
    if (grade[0] == 'A') score = 4.0;
    else if (grade[0] == 'B') score = 3.0;
    else if (grade[0] == 'C') score = 2.0;
    else if (grade[0] == 'D') score = 1.0;
    else score = 0.0;  // F일 경우 0.0

    // 두 번째 문자가 + 또는 -
    if (grade.size() > 1) 
    {
        if (grade[1] == '+') score += 0.3;
        else if (grade[1] == '-') score -= 0.3;
    }

    cout << fixed << setprecision(1) << score << endl;

    return 0;
}
