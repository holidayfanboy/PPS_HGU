class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        
        int left = 0, right = x, mid;
        
        while (left <= right) {
            mid = left + (right - left) / 2;
            long long square = (long long)mid * mid;
            
            if (square == x) {
                return mid;  
            }
            else if (square < x) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return right; 
    }
};
