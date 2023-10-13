class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int left=0;
        int right=0;
        int res=0;
        while(right <n){
            if(right>0 && (nums[right]%2==nums[right-1]%2 || nums[right]>threshold)){
                left=right;
            }
            if(nums[left]%2!=0 ||  nums[left]>threshold ){
                left++;
            }
            res=max(res , right-left+1);
            right++;
            
        }
        return res;
    }
};
