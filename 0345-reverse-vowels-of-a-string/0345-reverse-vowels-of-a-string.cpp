class Solution {
public:
    string reverseVowels(string s) {
       
        string vowel= "aeiouAEIOU";
        int st=0;
        int end= s.length()-1;

          
        while(st<end)
        {
            while(st<end && vowel.find(s[st]) == string::npos )
            {
                st++;
            }

            while(st<end && vowel.find(s[end]) == string::npos)
            {
                end--;
            }

            swap(s[st],s[end]);
            st++;
            end--;
        }

        return s;
    }
};