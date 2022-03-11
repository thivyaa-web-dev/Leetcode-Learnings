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
    void reorderList(ListNode* head) {
        vector<ListNode*>arr;
        for(auto it = head;it;it = it->next)
            arr.push_back(it);
        
        //pointer to the start and the end of the list, re-order in alternating fashion from both the end 
        int L =1, R= arr.size()-1;
        for(int i =0;i<arr.size();i++, head = head->next)
          if(i & 1)                             // odd iteration:
                head -> next = arr[L++];          //        - pick node from L & update L ptr
            else                                  // even iteration
                head -> next = arr[R--];          //        - pick node from R & update R ptr
        
        head -> next = nullptr;
    }
};