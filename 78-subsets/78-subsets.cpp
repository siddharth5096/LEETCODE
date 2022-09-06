class Solution {
public:
    void sample(int i,vector<int>nums,vector<int>&lev,vector<vector<int>>&ans)
    {
        if(i==nums.size())
        {
             ans.push_back(lev);
            return;
        }
        lev.push_back(nums[i]);
        sample(i+1,nums,lev,ans);
        
        lev.pop_back();
        sample(i+1,nums,lev,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>ans; 
        vector<int>lev;
    sample(0,nums ,lev,ans);
        
        return ans;
    }
};