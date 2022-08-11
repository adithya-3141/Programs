#include <bits/stdc++.h>
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
    int getDecimalValue(ListNode* head) {
        stack<int> bin;
        int power = 0;
        int result = 0;
        while (head != NULL){
            bin.push(head->val);
            head = head->next;
        }
        
        while (!bin.empty()){
            int i = bin.top();
            int a = pow(2, power);
            result += i*a;
            power += 1;
            bin.pop();
        }
        
        return result;
        
    }
};