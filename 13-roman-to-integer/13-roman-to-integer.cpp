class Solution {
public:
    
    int romanToInt(string s) {
        int sum=0,ar[s.length()];
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I') ar[i]=1;
            else if(s[i]=='V') ar[i]=5;
            else if(s[i]=='X') ar[i]=10;
            else if(s[i]=='L') ar[i]=50;
            else if(s[i]=='C') ar[i]=100;
            else if(s[i]=='D') ar[i]=500;
            else if(s[i]=='M') ar[i]=1000;
        }
        
        int max=0;
        for(int i = s.length()-1 ;i >=0 ; i--)
        {
            if(ar[i] >= max){
                max=ar[i];
                sum+=ar[i];
            }
            else
                sum-=ar[i];
        }
        return sum;
    }
};