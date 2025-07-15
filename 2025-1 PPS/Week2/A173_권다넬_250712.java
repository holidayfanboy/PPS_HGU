public class Solution {
    public int solution(int[] numbers) {
        int total = 45;  // 0부터 9까지의 합
        int sum = 0;

        for (int num : numbers) {
            sum += num;
        }

        return total - sum;
    }
}
