class Solution {
public:
    
    void removeO(string &s, string &part, int pos){
        if(pos == string::npos){
            return;
        }
        s.erase(pos,part.size());
        pos = s.find(part);
        removeO(s, part, pos);
        
        
    }
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        removeO(s,part,pos);
        return s;
  
    }
};