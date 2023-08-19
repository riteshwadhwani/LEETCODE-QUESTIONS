class Solution {
public:
    string addS(string &num1,int p1, string &num2, int p2, int carry){
        
        if(p1<0 && p2<0){
            if(carry!=0){
                return string(1,carry +'0');
            }
            return "";
        }
        string ans = "";
        int n1 = (p1>=0 ? num1[p1]:'0')-'0';
        int n2 = (p2>=0 ? num2[p2]:'0')-'0';
        int sum = n1 + n2 + carry;
        carry = sum/10;
        ans.push_back(sum%10+'0');
        ans += addS(num1, p1-1, num2, p2-1, carry);
        return ans;
        
    }
    string addStrings(string num1, string num2) {
        int p1 = num1.size()-1;
        int p2 = num2.size()-1;
        string ans = addS(num1,p1, num2,p2,0);
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};