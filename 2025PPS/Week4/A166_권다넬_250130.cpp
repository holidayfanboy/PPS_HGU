#include <string>
using namespace std;

long long stringToInt(const string& s) {
    long long result = 0;
    for (char c : s) {
        result = result * 10 + (c - '0');  
    }
    return result;
}

int solution(string t, string p) {
    int answer = 0;
    int m = p.size();
    long long numP = stringToInt(p); 


    for (int i = 0; i <= t.size() - m; i++) {
        long long numT = stringToInt(t.substr(i, m)); 
        if (numT <= numP) 
        {
            answer++;
        }
    }

    return answer;
}
