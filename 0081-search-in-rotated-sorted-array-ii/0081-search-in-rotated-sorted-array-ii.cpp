class Solution {
public:
    
    int findPivotIndex(vector<int>& nums){
        int s =0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(s==e){
                return s;
            }
            if(nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid-1]>nums[mid]){
                return mid-1;
            }
            if(nums[s]>nums[mid]){
                e = mid-1;
            }
            else {
                s= mid+1;
            }
        }
        return -1;
    
    }
    int bs(int s, int e ,vector<int>& arr, int target){
        while(s<=e){
            int mid = s + (e-s)/2;
            
            if(arr[mid]== target){
                return true;
            }
            else if(arr[mid]<target){
                s = mid +1;
               
            }
            else{
                 e = mid-1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
          unordered_set<int> st;
        vector<int> arr;
        for(auto it : nums){
            if(st.find(it) != st.end()) continue;
            st.insert(it);
            arr.push_back(it);
        }
          if(arr[0] < arr[arr.size()-1]){
            return bs(0,arr.size()-1,arr,target);
        } 
        
        int pivotIndex = findPivotIndex(arr);
        
       return bs(0,pivotIndex,arr,target) || bs(pivotIndex+1,arr.size()-1,arr,target);
       
        
    }
};