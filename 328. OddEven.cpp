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
    ListNode* oddEvenList(ListNode* head) {
    int flag = 0;
    ListNode* temp = head;
    ListNode* head1 = NULL;
    ListNode* head2 = NULL;
    ListNode* tail1 = NULL;
    ListNode* tail2 = NULL;

    while(temp != NULL) 
    {
       if(flag == 0)  // for odd nodes
       {
        if(head1 == NULL) 
        {
         head1 = head;
         tail1 = head;
        } 
        else 
        {
            tail1 -> next = temp;
            tail1 = tail1 -> next;
        }
         temp = temp -> next;
         flag = -1;
       }
       else if(flag == -1) // for even nodes
       {
           if(head2 == NULL) 
           {
          head2 = temp;
          tail2 = temp;
           }
           else 
           {
              tail2 -> next = temp;
              tail2 = tail2 -> next;            
           }
          temp = temp -> next;
          flag = 0;
       }
    }
        if(head2 == NULL) {
       return head1;
    }
    tail1 -> next = head2;
    tail2 -> next = NULL;

    return head1;
    }
};
