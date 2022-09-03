class Solution {
public:
    void sample(int x,int cnt,int n, int k,vector<int>&res)
    {
        if(cnt==n)
        {
            res.push_back(x);
            return;
        }
        for(int i=0;i<10;i++)
        {
            int last=x%10;
            if(abs(last-i)==k)
            {
                sample((x*10+i),cnt+1,n,k,res);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
     vector<int>res; 
        if(n==1)
            res.push_back(0);
        
        for(int i= 1;i<10;i++)
        {
            sample(i,1,n,k,res);
        }
        return res; 
    }
};