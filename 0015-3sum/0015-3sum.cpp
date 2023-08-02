class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
      vector<vector<int>>a;
        int i =0;
       
       
        
        while(i<nums.size()-1){
            int j =i+1;  int k  =nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(nums[i]+ nums[j]+ nums[k]>0){
                    k--;
                }
                else{
                    
                    j++;
                }
            }
            i++;
             
        }
        for(auto i :s){
            a.push_back(i);
        }
        return a;
        
    }
};