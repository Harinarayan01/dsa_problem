class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
         for(auto v:s){
             if(st.empty()){
                 st.push(v);
             }
             else if(st.top()=='(' && v==')' || st.top()=='{' && v=='}' || st.top()=='[' && v==']'){
                 st.pop();
             }
             else{
                 st.push(v);
             }
         }
         if(st.size()==0){
             return true;
         }
         else{
             return false;
         }

    }
};