#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end()); //정렬 
    int left = 0; 
    int right = people.size() - 1; 
    int boats = 0; // 필요한 구명보트 개수

    while (left <= right) {
        if (people[left] + people[right] <= limit) { //합이 limit 보다 작을 경우
            left++; //왼쪽 탑승
        }
        // 가장 무거운 사람은 항상 태운다
        right--;
        boats++; 
    }
    return boats;
}
