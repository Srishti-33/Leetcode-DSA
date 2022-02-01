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
    int pairSum(ListNode* head) {
   stack<int> s1;
   ListNode* temp = head;
   int length = 0;
   int maxSum = INT_MIN;
   while(temp != NULL) {
       temp = temp -> next;
       length++;
   }
   temp = head;
   while(temp != NULL) {
       s1.push(temp -> val);
       temp = temp -> next;
   }
   temp = head;
   while( length > length/2) {
       
       if(maxSum < temp -> val + s1.top()) {
           maxSum = temp -> val + s1.top();
       }
       s1.pop();
       temp = temp -> next;
       length--;
   }
   return maxSum;
    }
};
