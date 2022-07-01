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
    bool hasCycle(ListNode *head) {
        vector<ListNode*> address;
        
        while (head!= NULL){
            if (address.size() == 0){
                address.push_back(head);
                head = head -> next;
            }
            
            else{
                if (binary_search(address.begin(), address.end(), head)){
                    return true;
                    break;
                }
                
                address.push_back(head);
                head = head->next;
            }
        }
        
        return false;
    }
};