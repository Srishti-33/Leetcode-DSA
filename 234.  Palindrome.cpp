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
    bool isPalindrome(ListNode* head) 
    {
        ListNode* temp = head;
        stack <int> s1;
        while(temp != NULL) 
        {
            s1.push(temp -> val);
            temp = temp -> next;
        }
        temp = head;
        while(temp != NULL) 
        {
            if(temp -> val == s1.top())
            {
                s1.pop();
            }
            else if(temp -> val != s1.top()) {
                break;
            }
            temp = temp -> next;
        }
        if(temp == NULL) {
            return true;
        }
            return false;
    }
};
