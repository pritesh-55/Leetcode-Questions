class Solution {
    
    public int[] twoSum(int[] nums, int target) {
       int  []result=new int[2];
       boolean found = false;
       for(int i = 0;i<nums.length-1;i++){
            result[0]=i;
            int num =nums[i];
           for(int j = i+1;j<nums.length;j++){
               if((num+nums[j])==target){
                   result[1]=j;
                   found=true;
                   break;
               }
         }
           
           if(found) break;
       }
        
        return result;
    }
}