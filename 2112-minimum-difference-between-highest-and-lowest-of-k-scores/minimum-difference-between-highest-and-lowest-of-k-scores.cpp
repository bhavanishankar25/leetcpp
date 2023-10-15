class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));

        int n = size(nums);
        int i=0,j=0,ans=INT_MAX;

        while(j<n)
        {
            if(j-i+1 == k)
            {
                ans = min(ans, nums[j]-nums[i]);
                i++;
            }

            j++;
        }
return ans;

    }
};