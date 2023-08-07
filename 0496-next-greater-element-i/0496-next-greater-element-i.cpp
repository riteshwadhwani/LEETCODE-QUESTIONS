class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mapping;
        stack<int>st;
        int i = nums2.size()-1;
        while(i>=0){
            while(!st.empty() && st.top()<nums2[i]){
                st.pop();
            }
            if(st.empty()){
                st.push(-1);
            }
            mapping[nums2[i]]=st.top();
            st.push(nums2[i]);
            i--;
        }
        vector<int>ans;

     for(int i =0;i<nums1.size();i++){
         ans.push_back(mapping[nums1[i]]);
     }
        return ans;
        
    }
};