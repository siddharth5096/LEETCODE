class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int low = 0, high = arr.size()-1;
        k = arr.size() - k;
        while(k--)
            (abs(arr[low] - x) <= abs(arr[high] - x)) ? high-- : low++;
        vector<int> res(arr.begin() + low, arr.begin() + high + 1);
        return res;    
    }
};