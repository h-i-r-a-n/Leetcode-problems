class Solution:
    def findMismatchedSegments(self, s1: str, s2: str) -> list[list[str]]:
        b = 0
        a  = 0

        l=[]
        if s1 == s2:
            return []
        st1=""
        st2=""   
        for i in range (len(s1)):
            
            if(s1[i]!=s2[i]):
                st1+=s1[i]
                st2+=s2[i]
            if(s1[i]==s2[i]):
                if st1:
                    l.append([st1,st2])
                    
                    st1=""
                    st2=""  

        if st1:
            l.append([st1,st2])
         
           #a = i

        return l
            

        
        