import java.util.*;
class Solution {
    public int majorityElement(int[] nums) {
        
        int tresh = (nums.length)/2;
        Hashtable<Integer, Integer> map = new Hashtable<>();
        for(int i = 0; i<nums.length; i++)
        {
            if(!map.containsKey(nums[i])) map.put(nums[i],1);

            else
            {
                int current = map.get(nums[i]);
                map.put(nums[i],current+1);
            }
        }

        for(var entry : map.entrySet())
        {
            int n = entry.getKey();
            int count = entry.getValue();

            if (count > tresh)
            {
                return n;
            } 
        }
        return 0;
    }
}