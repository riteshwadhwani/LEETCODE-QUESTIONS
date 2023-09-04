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


    int getLength(ListNode*head){
        int len =0;
        while(head!=NULL){
            head=head->next;
            len++;
        }
        return len;
    }

    ListNode* reverse(ListNode*head){

        if(head ==nullptr){
            return head;
        }
        ListNode* prev = nullptr;
        ListNode*  curr = head;
        ListNode* forward = curr->next;
        while(curr!=nullptr){
            forward = curr->next;
            curr->next = prev;
            prev = curr ;
            curr = forward;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = getLength(head);

        int k = len-n;

        if(len-n<0){
            return head;
        }
        if(head == nullptr){
            return head;
        }
        ListNode* prev = head;
        ListNode* curr = head;
        if(k==0 && head->next!=0){
            head= head->next;
        }
        else if(k==0 && head->next == nullptr){
            return nullptr;
        }

        while(k){
            prev = curr;
            curr = curr->next;
            k--;
        }
        cout<<prev->val<<" ";
        cout<<curr->val;
        if(prev->next!=nullptr){
              prev->next = prev->next ->next;

        }
        else{
            return nullptr;
        }
      
        
        

        return head;

       

    
        
    }
  
};