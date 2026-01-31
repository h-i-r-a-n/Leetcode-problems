class Solution {
public:
    string reverseByType(string s) {

        int front = 0;
        int rear = s.size() - 1;

        while(front<rear)
            {
                if(!isalpha(s[front])) front++;

                else if(!isalpha(s[rear])) rear--;

                else
                {
                    swap(s[front],s[rear]);
                    front++;
                    rear--;
                }
            }

        front = 0;
        rear = s.size() - 1;
        
        while(front<rear)
            {
                if(isalpha(s[front])) front++;

                else if(isalpha(s[rear])) rear--;

                else
                {
                    swap(s[front],s[rear]);
                    front++;
                    rear--;
                }
            }

        return s;
            
        
    }
};