class Solution {
public:
    int maxArea(vector<int>& height) {
        int left;
        int right,h,w;
        int maxarea=0;
        int n=height.size();
         left=0;
        right=n-1;
        while(left<right){
            h=min(height[left],height[right]);
            w=right-left;
            int area=h*w;
            maxarea=max(area,maxarea);
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return maxarea;
    }
};