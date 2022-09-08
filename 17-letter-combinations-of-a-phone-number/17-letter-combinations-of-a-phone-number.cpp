class Solution {
public:
    void sample(string digits,int curr,string &s,vector<string>&ans, map<char,string>&m)
    {
        if(curr>=digits.size())
        {
            ans.push_back(s);
            return;
        }
        char num = digits[curr];
        string mps = m[num]; 
        for(int i=0;i<mps.size();i++)
        {
            s.push_back(mps[i]);
                sample(digits,curr+1,s,ans,m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
    map<char,string>m {{'1',""},{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        string s="";
        if(digits.size()==0)
            return ans;
        
        sample(digits,0,s,ans,m);
            return ans;
    }
};