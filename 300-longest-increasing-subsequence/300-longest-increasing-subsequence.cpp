class Solution {
public:
//     int f(int ind,int prev,vector<int>& nums, vector<vector<int>>&dp )
//     {
//         if(ind==nums.size())
//             return 0 ;
        
//         if(dp[ind][prev+1]!=-1)
//             return dp[ind][prev+1];

//         int not_take= f(ind+1,prev,nums,dp);
//         int take = 0;
//         if(prev == -1|| nums[ind]>nums[prev])
//              take= 1 + f(ind+1,ind,nums,dp); 
        
//         return dp[ind][prev+1] = max(take,not_take); 
      
//     }
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        //return f(0,-1,nums,dp);
        
        for(int ind=n-1;ind>=0;ind--)
            for(int prev=ind-1;prev>=-1;prev--)
            {
                int not_take= dp[ind+1][prev+1];
                int take = 0;
                if(prev == -1|| nums[ind]>nums[prev])
                    take= 1 + dp[ind+1][ind+1]; 
                
                  dp[ind][prev+1] = max(take,not_take);
            }
        return dp[0][0];
      
    }
};