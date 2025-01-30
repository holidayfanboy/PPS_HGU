using namespace std;

int solution(int n) {
    int answer = 0;
    int check = n;
    while (check > 0)
    {
        if (n%check == 1)
        {
            answer = check;
        }
        check--;
    }
    return answer;
}