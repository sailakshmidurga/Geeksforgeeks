class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        for(int i = 0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        vector<int>res;
        
        for(auto it:mpp)
        {
            if(it.second == 2)
            {
                res.push_back(it.first);
                break;
            }
        }
        for(int i =1;i<=arr.size();i++)
        {
            if(mpp.find(i)==mpp.end())
            {
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};