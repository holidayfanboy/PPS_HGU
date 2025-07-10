import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        Hashtable<String,Integer> table = new Hashtable<>();
        
        for (int i = 0; i < participant.length; i++)
            table.put(participant[i], table.getOrDefault(participant[i], 0) + 1);;
                    
        for (int k = 0; k < completion.length; k++)
        {
           table.put(completion[k], table.get(completion[k]) - 1);
        }
        
         for (String key : table.keySet()) {
            if (table.get(key) > 0) {
                return key;
            }
        }
        return answer;
    }
}