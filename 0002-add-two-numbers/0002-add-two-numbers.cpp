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
  
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      int carry =0;
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
      while(l1 !=nullptr || l2!=nullptr || carry!=0){
          int sum = 0;
          if(l1!=nullptr){
              sum +=l1->val;
              l1=l1->next;
          }
          if(l2!=nullptr){
              sum+=l2->val;
              l2= l2->next;
          }
          if(carry!=0){
              sum +=carry;
          }
          int digit = sum%10;
          carry = sum/10;
          ListNode* newNode = new ListNode(digit);
          temp ->next = newNode;
          temp = newNode;
          
      }
        return ans->next;
    

    }
};