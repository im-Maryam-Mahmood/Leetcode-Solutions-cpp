class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        string res;
        for( char c : s){
            if( !stk.empty() && stk.top() == c) stk.pop();
            else stk.push(c);
        }
        while( !stk.empty()){
            res =  stk.top() + res;
            stk.pop();}
        return res;
    }
};