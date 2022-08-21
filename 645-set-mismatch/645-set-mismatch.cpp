class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>ump;
		vector<int>ans;
		for(auto itr:nums)
		{
			ump[itr]++;
		}
        
		for(int i=1;i<=nums.size();i++)
		{
			if(ump.find(i)==ump.end())
				ans.push_back(i);
		}
		for(auto itr:ump)
		{
			if(itr.second>1)
				ans.insert(ans.begin(),itr.first);
		}
		return ans; 
    }
};