class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        long long i=0, j=0, sum=0, mini = LLONG_MAX;

        while(j<nums.size()){
            if((nums[j]+sum)<target){
                sum=sum+nums[j++];
            }
            else{
                mini=min(mini ,abs(j-i+1));
                sum=sum-nums[i++];
            }
        }
        if(mini ==LLONG_MAX)
            return 0;
        return mini;
    }
};