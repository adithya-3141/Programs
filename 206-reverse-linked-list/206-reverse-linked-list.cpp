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
    ListNode* reverseList(ListNode* head) {
        
        if (head != NULL){
            ListNode* cur = head;
            ListNode* mid = head->next;
            if (mid == NULL){
                return cur;
            }
            ListNode* nxt = mid->next ;
            
            if (mid == NULL){
                return head;
            }
            
            else if (nxt == NULL){
                cur->next = NULL;
                mid -> next = cur;
                return mid;
            }
            
            else{
                cur -> next = NULL;
                while (cur != NULL && mid != NULL && nxt != NULL){
                    mid ->next = cur;
                    cur = mid;
                    mid = nxt;
                    nxt = nxt->next;
                    
                }
                mid -> next = cur;
                
                return mid;
            }
            
        }
        
        else{
            return head;
        }
    }
};