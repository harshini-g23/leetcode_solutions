class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
         vector<int>ans(n);
         vector<int>res(n);
          ans[0]=1;
            for(int i=1;i<n;i++){
                ans[i]=ans[i-1]*nums[i-1];
            }
            int rp=1;
            for(int i=n-1;i>=0;i--){
                res[i]=ans[i]*rp;
                rp=rp*nums[i];
            }
        return res;
    }
};