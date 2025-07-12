class Solution {
public:
    int check(char ch){
        if(ch == '(' || ch == ')') return 1;
        else if(ch == '{' || ch == '}') return 2;
        else if(ch == '[' || ch == ']') return 3;
        else return -1;
    }

    bool isValid(string s) {
        stack<int>st;
        int n = s.size();
        int i = 0;
        while(i < n){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else if(ch == ')' || ch == '}' || ch == ']'){
                if(st.empty()) return false;
                char temp = st.top();
                if(check(temp) == check(ch)){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
            i++;
         }
        return st.empty();
    }
};