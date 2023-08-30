class Solution {
public:
    bool isPalindrome(int x) {
           if(x<0){
            return false;
        }
        if(x==0){
            return true;
        }
        vector<int>arr;
        int carry;
        if(x!=0){
            int digit= x%10;
            carry= x/10;
            arr.push_back(digit);
        }
        while(carry!=0){
            arr.push_back(carry%10);
            carry=carry/10;
        }
       int i=0;
       int j=arr.size()-1;
       while(i<=j){
           if(arr[i]!=arr[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
        
    }
};