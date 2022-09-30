class Solution {
    public int trap(int[] height) {
        int low = 0, high = height.length - 1;
        int left = 0, right = 0;
        
        int ans = 0;
        while(low <= high) {
            
            left = Math.max(left, height[low]);
            right = Math.max(right, height[high]);
            
            if(left <= right) ans += left - height[low++];
            else ans += right - height[high--];
            
        }
        return ans;
    }
}
