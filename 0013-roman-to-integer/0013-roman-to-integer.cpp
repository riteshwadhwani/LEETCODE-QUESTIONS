class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mapping;
        mapping['I']=1;
        mapping['V']=5;
        mapping['X']=10;
        mapping['L']=50;
        mapping['C']=100;
        mapping['D']=500;
        mapping['M']=1000;
    int ans=0;
   
        for(int i =0;i<s.length();i++){
          if(mapping[s[i]]<mapping[s[i+1]]){
              ans -=mapping[s[i]];
          }
          else{
              ans +=mapping[s[i]];
          }
        }
        return ans;

        
    }
};