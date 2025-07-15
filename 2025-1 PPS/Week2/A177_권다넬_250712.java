public class Solution {
    public int solution(int[][] sizes) {
        int maxWidth = 0;
        int maxHeight = 0;

        for (int[] size : sizes) {
            int w = size[0];
            int h = size[1];

            // 큰 쪽을 가로, 작은 쪽을 세로로 회전
            int larger = Math.max(w, h);
            int smaller = Math.min(w, h);

            maxWidth = Math.max(maxWidth, larger);
            maxHeight = Math.max(maxHeight, smaller);
        }

        return maxWidth * maxHeight;
    }
}
