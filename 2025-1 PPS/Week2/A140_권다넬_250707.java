import java.util.*;

class Solution {
    public int solution(int[] nums) {
        Hashtable <Integer, Integer> table = new Hashtable<>();
        int pick = nums.length/2;
        int answer = 0;
        
        for (int i = 0; i < nums.length; i++)
        {
            table.put(nums[i],i);
        }
        if (pick <= table.size())
        {
            answer = pick;
        }
        
        else
        {
            answer = table.size();
        }
        return answer;
    }
}