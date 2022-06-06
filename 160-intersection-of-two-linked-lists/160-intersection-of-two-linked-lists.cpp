/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //we need to reach the intersection point at the same time 
        // we need to calculate the length of longer list A 
        //we need to cal the length of shorter list B 
        // we need to find the difference of these both lists and that is starting pnt 
        //we go on checking for the equality 
        
        // 1. Find the length of both the lists 
        // 2. Find the difference in the length of both the lists 
        //3. Then start checking the equality for the nodes 
        // 4. Once we find equal node return that node 
        // 5. otherwise if we reach null at the end return the null
        if(headA == NULL|| headB == NULL) return NULL;
        ListNode*a_pointer = headA;
        ListNode*b_pointer = headB;
        
        //while the nodes are not equal 
        while(a_pointer != b_pointer ){
            if(a_pointer == NULL){
              //this means it is at the end of the list 
                a_pointer = headB;   
            } 
        
        else{
            a_pointer = a_pointer->next;
        }
        
              if(b_pointer == NULL){
               //this means it is at the end of the list 
                b_pointer = headA;   
              } 
            
        else{
            b_pointer = b_pointer->next;
        }
        }
        return a_pointer;
    }
};