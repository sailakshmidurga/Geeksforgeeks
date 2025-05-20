

class Solution {

public:

bool isVowel(char c)
{
    return (c == 'a' || c== 'e' || c =='i' || c == 'o' || c == 'u');
}
  public:

    string Sandwiched_Vowel(string &s) {
        // Your code goes here
        int n = s.length();
        string result;
        for(int i =0;i<n;++i)
        {
            if( i>0 && i<n-1 && isVowel(s[i])&& !isVowel(s[i-1]) && !isVowel(s[i+1]))
            {
                continue;
            }
            else
            {
                result+=s[i];
            }
        }
        return result;
    }
};