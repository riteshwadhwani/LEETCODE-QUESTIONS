class node{
    public:
    char data;
    int count;
    node( char d , int c){
        data=d;
        count=c;
    }
};
class compare{
    public:
   bool operator()(node a, node b){
        return a.count < b.count;
    }
};


class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<node,vector<node>,compare>maxHeap;
    
    if(a!=0){
       node temp('a',a);
        maxHeap.push(temp);
    }
    if(b!=0){
          node temp('b',b);
        maxHeap.push(temp);
    }
    if(c!=0){
       node temp('c',c);
        maxHeap.push(temp);
    }
    string ans = "";
    while(maxHeap.size()>1){
        node first = maxHeap.top();
        maxHeap.pop();
        node second = maxHeap.top();
        maxHeap.pop();

        if(first.count>=2){
            ans +=first.data;
            ans+=first.data;
            first.count--;
            first.count--;
        }
        else{
            ans+=first.data;
            first.count--;
        }
        if(second.count>=2 && second.count>=first.count){
            ans +=second.data;
            ans+=second.data;
               second.count--;
            second.count--;
        }
        else{
            ans+=second.data;
            second.count--;
        }
        if(first.count>0){
            maxHeap.push(first);
        }
        if(second.count>0){
            maxHeap.push(second);
        }
    }
    if(maxHeap.size()==1){
        node top = maxHeap.top();
        maxHeap.pop();
       if(top.count>=2){
           ans+=top.data;
           ans+=top.data;
           top.count -=2;
       }
       else{
           ans+=top.data;
           top.count -=1;
       }
    
    }
   return ans;
}
};