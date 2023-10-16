class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>st;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(st.find(nums[j])==st.end()){
                st.insert(nums[j]);
            }
            else{ 
                return true;
            }
            if(j-i==k)
            {
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return false;
    }

   
};