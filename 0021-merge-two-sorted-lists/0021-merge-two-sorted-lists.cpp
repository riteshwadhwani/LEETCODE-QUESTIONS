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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
 ListNode* h1=list1;
        ListNode* h2=list2;
        if(h1==NULL){
            return h2;
        }
        if(h2==NULL){
            return h1;
        }
        if(h1==NULL && h2==NULL){
            return NULL;
        }



        ListNode* ans =new ListNode(-1);
        ListNode* mptr = ans;
        while(h1!=NULL && h2!=NULL){
             if(h1->val > h2->val){
             mptr->next=h2;
             mptr = h2;
             h2=h2->next;
        }
        else{
            mptr->next =h1;
            mptr = h1;
            h1=h1->next;
        }
        }
         if(h1){
            mptr->next = h1;
            // mptr=h1;
            // h1=h1->next;
        }
        if(h2){
            mptr->next =h2;
            // mptr=h2;
            // h2=h2->next;
        }

        return ans->next;
        
    }
};