class Solution {
public:
    vector<vector<int>> res; 
      void solve(int i,vector<int>& nums,vector<int>& subSet, bool pre){
      if(i==nums.size()){
        res.push_back(subSet);
        return;        
      }
     // remove ith element   
      solve(i+1,nums,subSet,false);
     if(i>0 && nums[i]==nums[i-1] && (!pre))
        return;
          
      // include ith element
      subSet.push_back(nums[i]);
      solve(i+1,nums,subSet,true);
    
        subSet.pop_back(); 
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
   vector<int> subSet;
        sort(nums.begin(),nums.end());
      solve(0,nums,subSet,true);
      return res;
    }
};