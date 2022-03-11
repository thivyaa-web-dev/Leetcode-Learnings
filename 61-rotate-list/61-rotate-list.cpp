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
    ListNode* rotateRight(ListNode* head, int k) {
        //edge cases 
        if(!head||!head->next||k == 0) return head;
        
        //compute the length
        //assign the dummy pointer to the head 
        ListNode*cur = head;
        int len =1;
        //we're going to move the current pointer unless and until it reaches the end 
        while(cur->next && ++len)
            cur = cur->next;
        
        //go till the last node till the head
        cur->next = head;
        k=k%len;
        k=len-k;
        while(k--) cur= cur->next; //keep moving till the k reduces to 0
        
        //make the node head and break the connection
        head = cur->next;
        cur->next =NULL;
        
        return head;
        
    
        
    }
};