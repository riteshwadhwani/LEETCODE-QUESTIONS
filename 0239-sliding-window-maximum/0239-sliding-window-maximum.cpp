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
	bool operator()(node a , node b){
		return a.data < b.data;
	}
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     priority_queue<node,vector<node>,compare>maxHeap;
        vector<int>ans;
        if(k==0){
            return ans;
        }
        
        for(int i =0;i<k;i++){
            maxHeap.push(node(nums[i],i));
        }
      ans.push_back(maxHeap.top().data);
        for(int i =k ;i<nums.size();i++){
             maxHeap.push(node(nums[i],i));
            while(maxHeap.top().index<=i-k){
                maxHeap.pop();
            }
             ans.push_back(maxHeap.top().data);
        }
    
  
        return ans;
    }
};