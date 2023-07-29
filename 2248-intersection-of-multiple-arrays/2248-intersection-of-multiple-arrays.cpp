class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>arr;
        unordered_map<int,int>mapping;
        for(auto num: nums){
            int i =0;
            while(i<num.size()){
                mapping[num[i]]++;
                i++;
            }
        }
        for(auto a : mapping){
            if(a.second==nums.size()){
                arr.push_back(a.first);
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
        
    }
};