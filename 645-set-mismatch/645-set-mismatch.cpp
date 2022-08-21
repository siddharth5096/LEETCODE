class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            mp[i]=0;
        }
        for(int i=0;i<n;i++)
        {
           mp[nums[i]]+=1;
        }
        int x=0;
        for(auto it : mp )
        {
              if(it.second==2)
                 x = it.first;
             if (it.second==0)
                ans.push_back(it.first);
        }
        
        ans.insert(ans.begin(),x);
        return ans;
    }
};