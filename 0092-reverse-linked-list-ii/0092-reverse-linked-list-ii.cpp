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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>arr;
        ListNode*temp = head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
   
        int i =left;
   

        int j =right;
        i--;
        j--;
        cout<<i;
        cout<<j;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        ListNode* temp2 = head;
        int k =0;
        while(head!=nullptr){
            head->val=arr[k];
            head=head->next;
            k++;
        }
        return temp2;

        
    }
};