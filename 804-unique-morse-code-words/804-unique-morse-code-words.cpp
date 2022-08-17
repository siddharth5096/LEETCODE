class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
   vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>ans;
    for(int i=0;i<words.size();i++)
    {
        string temp = words[i];
        string s="";
        for(int j=0;j<temp.size();j++)
        {
            int ex = temp[j]-'a';
            s+=morse[ex];
        }
        ans.insert(s);
    }
        return ans.size();
    }

};