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
    ListNode* deleteMiddle(ListNode* head) {
    ListNode* temp = head;
    ListNode* prev = NULL;
    ListNode* prev1 = NULL;
    ListNode* temp1 = head;
    int length = 0;
    while(temp != NULL) {
        temp = temp -> next;
        length++;
    }
        if(length == 1) {
            return NULL;
        }
    temp = head;
    int mid = (length-1)/2;
    if(length % 2 != 0) {
        for(int i=0; i<mid; i++) {
            prev = temp;
            temp = temp -> next;
        }
      prev -> next = temp -> next;
      return head;
    }
    else if(length % 2 == 0) {
       for(int i=0; i<mid; i++) {
           prev1 = temp;
           temp1 = temp1 -> next;
       }
       temp1 -> next = temp1 -> next -> next;
     
    }
          return head;
    }
};
