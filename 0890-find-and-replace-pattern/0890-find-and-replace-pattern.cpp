class Solution {
public:
        bool isIsomorphic(string s, string t) {
            unordered_map<char,char>mapping;
            bool hash[256]={0};
            int i =0;
            while(i<s.size()){
                if(mapping.find(s[i])==mapping.end() && hash[t[i]]==0){
                    mapping[s[i]]=t[i];
                    hash[t[i]]=1;
                }
                i++;
            }
            for(int i =0;i<s.size();i++){
                if(mapping[s[i]]!= t[i]){
                    return false;
                }
            }
            return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(auto word : words){
            if(isIsomorphic(pattern ,word)){
                ans.push_back(word);
            }
        }
        return ans;
        
    }
};