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
    ListNode* middleNode(ListNode* head) 
    {
    ListNode* temp = head;
    ListNode* temp1 = head;
    int length = 0;
    while(temp != NULL) 
    {
        temp = temp -> next;
        length++;
    }
    temp = head;
    int mid = (length-1)/2;
    if(length % 2 != 0) 
    {
        for(int i=0; i<mid; i++) 
        {
            temp = temp -> next;
        }
      return temp;
    }
    else if(length % 2 == 0) 
    {
       for(int i=0; i<mid; i++) 
       {
           temp1 = temp1 -> next;
       }
    }
        return temp1 -> next;
    }
};
