/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* ptr = new ListNode(0,head);
        ListNode* temp = ptr;

        for(int i = 0;i<n;i++)
        {
            head = head->next;
            
        }

        while(head!=NULL)
        {
            head=head->next;
            temp=temp->next;
        }

        temp->next = temp->next->next;

        ListNode* result = ptr->next;
        delete ptr;
        return result;
        
    }
};