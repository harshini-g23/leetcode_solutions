class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int sum=0;
        int c=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int nsum=sum-k;
            if(mpp.find(nsum)!=mpp.end()){
                c+=mpp[nsum];
            }
            mpp[sum]++;
        }
        return c;
    }
};