class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int i,left,right;
        int sum;
       int n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++){
            left=i+1;
            right=n-1;
            //skipping duplicates
            if(i>0 && nums[i]==nums[i-1])
            continue;
            while(left<right){
                sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    result.push_back({nums[i],nums[left],nums[right]});
                    //skipping duplicates
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1] )right--;
                    left++;
                    right--;
                }
                else if(sum<0)
                    left++;
                else
                    right--;
            }
        }
        return result;
    }
};