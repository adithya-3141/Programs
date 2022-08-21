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
    ListNode* removeElements(ListNode* head, int val) {
        if (head != NULL){
            ListNode* prev = head;
            ListNode* cur = head->next;
            
            while (prev != NULL && cur != NULL){
                if (prev->val == val){
                    prev = cur;
                    cur = cur->next;
                    head = prev;
                    
                }
                
                else if (cur -> val == val){
                    prev->next = cur->next;
                    cur = cur->next;
                }
                
                else{
                    prev = cur;
                    cur = cur -> next;
                }
            }
            
            if (head -> val == val){
                return NULL;
            }
            
            return head;
            
        }
        
        else{
            return head;
        }
        
    }
};