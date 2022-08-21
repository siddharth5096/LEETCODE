class Solution {
public:
    bool isPalindrome(string s) {
    string temp;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))
            temp+=tolower(s[i]);
    }
         for(int i=0;i<temp.length()/2;i++) 
             if(temp[i]!=temp[temp.length()-i-1]) 
                 return false;
        
        return true;
    }
};