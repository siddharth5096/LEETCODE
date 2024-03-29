class Solution {
public:
    int helper(string &s, string &t,int i, int j,vector<vector<int>>&dp){
    if(j==0)
        return 1;
    if(i==0)
        return 0;
    
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    if(s[i-1]==t[j-1])
        return dp[i][j] = helper(s,t,i-1,j-1,dp) + helper(s,t,i-1,j,dp);
    
    else
        return dp[i][j] = helper(s,t,i-1,j,dp);
    
}
       
    int numDistinct(string s, string t) {
    int ls=s.size();
    int lt=t.size();
      vector<vector<int>>dp(ls+1,vector<int>(lt+1,-1));
        return helper(s,t,ls,lt,dp);      
    }
};