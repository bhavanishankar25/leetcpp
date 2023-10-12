class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int n=s.size();

        int ans=0;
        for(int i=0; i<n-k+1;i++){
            string str=s.substr(i,k);
            int curr=stoi(str);
            if(curr!=0 && num %curr==0){
                ans++;
            }
        }
        return ans;
    }
};