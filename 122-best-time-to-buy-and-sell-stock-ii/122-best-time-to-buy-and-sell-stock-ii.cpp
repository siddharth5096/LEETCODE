class Solution {
public:
//    long f(int ind,int buy,vector<int>&prices,vector<vector<long>>&dp)
//     {
//         if(ind==prices.size())
//             return 0;
//         if(dp[ind][buy]!=-1)
//             return dp[ind][buy];
//         int profit;
//         if(buy)
//         {
//             profit = max((-prices[ind]+f(ind+1,0,prices,dp)),f(ind+1,1,prices,dp));
//         }
//         else
//             profit = max((prices[ind]+f(ind+1,1,prices,dp)),f(ind+1,0,prices,dp));
        
//     return dp[ind][buy]=profit;
       
//     }
    
int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<long>>dp(n+1,vector<long>(2,-1));
       //return f(0,1,prices,dp); 

        dp[n][0]=dp[n][1]=0;
    
        long profit;
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                if(buy==0){
                    
                profit = max(0+dp[ind+1][0], -prices[ind] + dp[ind+1][1]);
               
                }
    
                if(buy==1){
                profit = max(0+dp[ind+1][1], prices[ind] + dp[ind+1][0]);
                 }
                dp[ind][buy]  = profit;
              
            }
        }
       return dp[0][0];
}
};