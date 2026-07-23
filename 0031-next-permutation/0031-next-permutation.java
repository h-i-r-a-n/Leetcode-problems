class Solution {

    private void swap(int arr[], int a, int b)
        {
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
        }

    public void nextPermutation(int[] nums) {

        int n = nums.length;
        int i = n-2;
        int pivot  = -1;

        while(i>=0)
        {   

            if (nums[i]<nums[i+1])
            {
                pivot = i;
                break;
            }
            i--;
        }


        if (pivot==-1)
        {   
            int l = 0, r = n-1; 
            while(l<r)
            {
                swap(nums,l,r);
                l++;
                r--;
            }

            return;
        }

        i = n-1;
        int great = 0;
        while(i!=0)
        {   

            if (nums[i]>nums[pivot])
            {
                great = i;
                break;

            }
            i--;
        }
        
        swap(nums,great,pivot);

        int l = pivot+1, r = n-1; 
        while(l<r)
            {
                swap(nums,l,r);
                l++;
                r--;
            }   

        
    }
}