class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // int ans = num[k];
        return nums[(nums.size()-k)];
        
    }
};