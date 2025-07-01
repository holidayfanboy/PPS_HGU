class Solution {
public:
    bool checkRecord(string s) {
        int counta; //Absent 횟수
        int countl; //Late 횟수

        for (int i = 0; i < s.size(); i++)
        {
            //다른 경우에는 L 횟수 0으로 초기화
            if (s[i] == 'P')
            {
                countl = 0;
            }
            else if (s[i] == 'L')
            {
                countl++;
            }
            else if (s[i] == 'A')
            {
                counta++; //A 횟수는 계속 증가
                countl = 0;
            }

            if (countl >= 3) //3보다 같거나 크면 fail
            {
                return false;
            }
            if (counta > 2) //2 초과시 fail
            {
                return false;
            }
        }

        return true;
    }
};