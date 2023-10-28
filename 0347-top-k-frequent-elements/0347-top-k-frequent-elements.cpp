class node{
    public:
    int first;
    int second;
    
    node(int f , int s){
        first = f;
        second = s;
    }
    
};

class compare{
    public:
    bool operator()(node a , node b){
        return a.second < b.second;
    }
};


class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
      priority_queue<node,vector<node>,compare>maxHeap;
        unordered_map<int,int>mapping;
        for(int i =0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        for(auto i : mapping){
            int a = i.first;
            int b = i.second;
            maxHeap.push(node(a,b));
        }
     int i =0;
        vector<int>ans;
      while(!maxHeap.empty() && i<k){
          ans.push_back(maxHeap.top().first);
          maxHeap.pop();
          i++;
      }
        return ans;
          

        
    }
};