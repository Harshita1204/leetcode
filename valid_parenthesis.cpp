class Solution {
public:
    bool isValid(string s) {
        stack<char>t;
        for(int i =0;i<s.length();i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
            t.push(ch);
            }
            else{
                if(t.empty()){
                    return false;
                }
                char top = t.top();
                t.pop();

               if((ch == ')' && top != '(') ||
               (ch == '}' && top != '{') ||
               (ch == ']' && top != '[')) {
                return false;
              }
            }
        }
        return t.empty();
    }
};
