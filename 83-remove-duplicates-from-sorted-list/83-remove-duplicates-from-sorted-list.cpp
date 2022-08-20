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
    ListNode* deleteDuplicates(ListNode* head) {
        
        
        if (head != NULL){
           ListNode *prev = head;
           ListNode *cur = prev->next;
           while (cur != NULL && prev != NULL){
            if (cur->val == prev->val){
                prev->next = cur->next;
                if (cur->next == NULL){
                    return head;
                }
                cur = cur->next;
                
            }
            
            else{
                prev = cur;
                cur = cur->next;
            
            }
            
          } 
            
            return head;
        }
        
        else{
            return head;
        }
        
        
    }
};