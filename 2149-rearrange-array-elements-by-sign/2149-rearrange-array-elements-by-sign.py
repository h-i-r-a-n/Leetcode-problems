class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:

        p = []
        n= []
        r=[]

        for i in nums:
            if (i>0):
                p.append(i)
            else:
                n.append(i)

        j = 0
        while (j<len(nums)/2):
        
            r.append(p[j])
            r.append(n[j])
            j+=1
        

        return r