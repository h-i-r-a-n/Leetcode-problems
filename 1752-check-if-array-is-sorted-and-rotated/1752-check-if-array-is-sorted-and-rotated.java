class Solution {
    public boolean check(int[] nums) {
        
        int i = 0;
        int[] org = nums.clone();
        Arrays.sort(org);

        boolean flag = false;

        while(i!=nums.length)
        {   
            flag = true;
            for(int j=0;j<nums.length;j++)
            {
                if(nums[j]!=org[(i+j)%org.length]) 
                {
                    flag = false;
                    break;
                }
                
            }
            
            if(flag)
            {
                return true;
            }
            i++;
        }

        return false;
    }
}