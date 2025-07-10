import java.util.*;

class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;
        Hashtable<String, Integer> table = new Hashtable<>();
        
        for (int i = 0; i < phone_book.length; i++)
        {
            table.put(phone_book[i],i);
        }
        
        for (int i = 0; i < phone_book.length; i++)
        {
            for (int k = 0; k < phone_book[i].length(); k++)
            if (table.containsKey(phone_book[i].substring(0,k)))
                answer = false;
        }
        return answer;
    }
}