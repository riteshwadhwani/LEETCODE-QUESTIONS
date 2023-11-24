class Solution {
public:
    bool isValid(string str) {
        stack<int>s;
        for(int i =0;i<str.length();i++){
            if(str[i]=='('|| str[i]=='['|| str[i]=='{'){
                s.push(str[i]);
            }
            else{
                if(!s.empty()){
                           if(str[i]==')' && s.top()=='('){
                    s.pop();
                }
                else if(str[i]==']' && s.top()=='['){
                    s.pop();
                }
                else if(str[i]=='}' && s.top()=='{'){
                    s.pop();
                }
                   else{
                    return false;
                }

                }
                else{
                    return false;
                }
             
            }
        }
        if(s.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};