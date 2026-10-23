class Solution {
public:
    bool isValid(string s) {
         if (s.length() % 2 != 0) return false; 

        stack<char> myStack;
        for (char c : s) {
            if (c == '(') myStack.push(')');
            else if (c == '{') myStack.push('}');
            else if (c == '[') myStack.push(']');
            else {
                if (myStack.empty() || myStack.top() != c) return false;
                myStack.pop();
            }
        }
        return myStack.empty();
    }
};
