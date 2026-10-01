class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        for(char ch:s)
        {
            if(ch=='('||ch=='{'||ch=='[')
            {
                ans.push(ch);
            }
            else
            {
                if(ans.empty())
                {
                    return false;
                }
                    char top = ans.top();
                    ans.pop();
                    if((ch==')' && top != '(')||(ch=='}'&& top != '{')||(ch==']'&& top != '['))
                    {
                        return false;
                    }
                
            }

        }

        return ans.empty();
    }
};