class Solution {
public:
    int trap(vector<int>& v) {
        int n =  v.size();
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);
        
        leftMax[0] = v[0] ;
        rightMax[n-1] = v[n-1] ;
        
        for(int i = 1 ; i < n ; i++){
            leftMax[i] = max(leftMax[i-1],v[i]);
        }
        
        for(int i = n-2 ; i >= 0 ; i--){
            rightMax[i] = max(rightMax[i+1],v[i]);
        }
        
        int res = 0 ;
        for(int i = 0 ; i < n ; i++){
            res+=(min(leftMax[i],rightMax[i])-v[i]) ;
        }
        
        return res ;
        
    }
};