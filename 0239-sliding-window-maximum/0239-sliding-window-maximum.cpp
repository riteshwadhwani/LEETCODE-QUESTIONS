class node{
    public:
    int data;
    int index;
    node(int d , int i){
          data = d;
        index = i;
    }
};
class compare{
    public:
    bool operator()(node a, node b){
        return a.data < b.data;
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     priority_queue<pair<int,int>>maxHeap;
        vector<int>ans;
        if(k==0){
            return ans;
        }
        int maxi=INT_MIN;
        
        for(int i =0;i<k;i++){
            maxHeap.push({nums[i],i});
        }
      ans.push_back(maxHeap.top().first);
        for(int i =k ;i<nums.size();i++){
             maxHeap.push({nums[i],i});
            while(maxHeap.top().second<=i-k){
                maxHeap.pop();
            }
             ans.push_back(maxHeap.top().first);
        }
    
  
        return ans;
    }
};