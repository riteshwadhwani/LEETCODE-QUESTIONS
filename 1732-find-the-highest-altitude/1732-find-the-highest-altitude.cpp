class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        stack<int>st;
        st.push(0);
        for(int i=0;i<gain.size();i++){
                st.push(st.top()+gain[i]);
        }
        int max = INT_MIN;
        while(!st.empty()){
            if(st.top()>max){
                max= st.top();
            }
            st.pop();
        }
        return max;
        
    }
};