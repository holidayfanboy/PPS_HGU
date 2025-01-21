class Solution {
public:
    bool rotateString(string s, string goal) {
        // 문자열 길이가 다르면  false 반환
        if (s.length() != goal.length()) {
            return false;
        }
        
        // 모든 회전 경우 포함
        string sum = s + s;
        
        // 연결된 문자열에서 goal이 부분 문자열로 확인
        return sum.find(goal) != string::npos;
    }
};
