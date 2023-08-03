class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int>mapping;

        for(int i =0;i<nums.size();i++){
            mapping[nums[i]] = mapping[nums[i]]+ 1;
        }
        int maxi =INT_MIN;

        for(auto i : mapping){
            maxi = max (maxi,i.second);
        }
        int ans ;
        for(auto i : mapping ){
            if(i.second==maxi){
                ans = i.first;
                break;
            }

            
        }
        return ans;
   
        
    }
};