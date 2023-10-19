class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0; int j=0; int ans=0;
        int n=fruits.size();
        unordered_map<int, int>mp;
        while(j<n){
            mp[fruits[j]]++;
            j++;
            if(mp.size()>2){
                while(1){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0){
                        mp.erase(fruits[i]);
                        i++;
                        break;
                    }
                    i++;
                }
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};