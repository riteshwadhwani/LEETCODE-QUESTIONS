class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        stack<int>st;
        k= k%nums.size();
        int tempk  =k;

        for(int i = nums.size()-1;i>=0;i--){
             if(k!=0){
                st.push(nums[i]);
                k--;
            }
            else{
                 nums[tempk+i] = nums[i];

            }
        
        }
        int i =0;
        while(!st.empty() && i<tempk){
            nums[i]= st.top();
            st.pop();
            i++;
        }
        
    }
};