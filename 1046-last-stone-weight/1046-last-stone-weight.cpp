class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        int n = stones.size();
        int i =n-1;
        while(i>0){
            int j = i-1;
            int ans = abs(stones[i]-stones[j]);
            stones[j]= ans;

            stones.pop_back();
            sort(stones.begin(),stones.end());
            i--;
        }
        return stones[i];
        
        
    }
};