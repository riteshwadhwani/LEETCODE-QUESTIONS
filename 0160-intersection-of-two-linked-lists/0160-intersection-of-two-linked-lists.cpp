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
    int Length(ListNode* head){
        int len=0;
        while(head!=nullptr){
            len++;
            head= head->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int one = Length(headA);
        int two = Length(headB);
        if(one>two){
            int m = one-two;
            while(m!=0){
                headA= headA->next;
                m--;
            }
            
        }
        else if(two>one){
            int m = two-one;
            while(m!=0){
                headB= headB->next;
                m--;
            }
        }
        
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};