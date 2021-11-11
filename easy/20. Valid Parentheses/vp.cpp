class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        for(char c : s)
        {
            if(charStack.empty() || c == '(' || c == '{' || c == '[') charStack.push(c);
            else if(c == ')')
            {
                if(charStack.top() != '(') return false;
                charStack.pop();
            }
            else if(c == ']')
            {
                if(charStack.top() != '[') return false;
                charStack.pop();
            }
            else
            {
                if(charStack.top() != '{') return false;
                charStack.pop();
            }
        }
        return charStack.empty();
    }
};