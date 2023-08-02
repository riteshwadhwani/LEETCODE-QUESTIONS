class Solution {
public:

    int bs(int s , int target ,vector<int>& nums){
        int e = nums.size()-1;
      

        while(s<=e){
              int mid = s+ (e-s)/2;
              if(nums[mid]==target){
                  return mid;
              }
              else if(nums[mid]< target){
                  s= mid+1;
              }
              else{
                  e= mid-1;
              }
            
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>a;
      for(int i =0;i<nums.size();i++){
          
          int ans =bs(i+1,target-nums[i],nums);
          if(ans!=-1){
              return {i+1,ans+1};
          }
      }
       
 
     return a;
      

        
    }
};