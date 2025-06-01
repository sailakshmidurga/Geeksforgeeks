class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        string res;
        int n1 = s1.length();
        int n2 = s2.length();
        for(char c:s1)
        {
           if(s2.find(c)==string::npos && res.find(c)==string::npos)
           {
               res.push_back(c);
           }
        }
        
        for(char c:s2)
        {
           if(s1.find(c)==string::npos && res.find(c) == string::npos)
           {
               res.push_back(c);
           }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
