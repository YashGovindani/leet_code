class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        map<char, char> m { {')','('}, {'}', '{'}, {']', '['}};
        for(char c : s)
        {
            if(charStack.empty() || c == '(' || c == '{' || c == '[') charStack.push(c);
            else
            {
                if(m[c] != charStack.top()) return false;
                else charStack.pop();
            }
        }
        return charStack.empty();
    }
};