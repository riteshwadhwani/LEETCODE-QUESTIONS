class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mapping;
        int i =0;
        bool hash[256]={0};
        while(i<s.size()){
            if(mapping.find(s[i])==mapping.end() && hash[t[i]]==0 ){
                    mapping[s[i]]= t[i];
                    hash[t[i]]=1;
            }
            i++;
        }

        for(int i =0;i<s.size();i++){
            if(mapping[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};