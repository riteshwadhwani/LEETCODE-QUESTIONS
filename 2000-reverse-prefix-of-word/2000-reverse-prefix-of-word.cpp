class Solution {
public:

    bool isAvailable(char ch, string &word){
        for(int i =0;i<word.size();i++){
            if(word[i]==ch){
                return true;
            }
        }
        return false;
        
    }
    string reversePrefix(string word, char ch) {

        int i =0;

        if(isAvailable(ch,word)){
               while(i<word.size()){
            if(word[i]== ch ){
                break;
            }
            i++;
        }
        reverse (word.begin(),word.begin()+i+1);
        return word;

        }
     
        return word;
        
    }
};