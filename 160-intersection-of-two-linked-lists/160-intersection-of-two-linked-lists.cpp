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
        map <ListNode*, int> tbl;
        
        ListNode* temp = headA;
        
        while (temp != NULL){
            tbl[temp] = 1;
            temp = temp->next;
        }
        
        ListNode* temp2 = headB;
        
        while(temp2 != NULL){
            if (tbl.find(temp2) != tbl.end()){
                return temp2;
            }
            
            temp2 = temp2->next;
        }
        
        return NULL;
        
    }
};