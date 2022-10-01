//Name - Nitish Kumar Maurya
//Difficulty - Medium
//Problem number - 40
//Problem Link - https://leetcode.com/problems/combination-sum-ii/
class Solution {
    public void combination(int ind,int tar,int[]arr,List<Integer>l1,List<List<Integer>>ans)
    {
        if(tar==0)
        {
            ans.add(new ArrayList<Integer>(l1));
            return;
        }
        for(int i=ind;i<arr.length;i++)
        {
            if(i>ind && arr[i]==arr[i-1])   
                continue;
            if(arr[i]>tar)   
                break;
            
            l1.add(arr[i]);
            combination(i+1,tar-arr[i],arr,l1,ans);
            l1.remove(l1.size()-1);
        }
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>>ans=new ArrayList<>();
        Arrays.sort(candidates);
        combination(0,target,candidates,new ArrayList<Integer>(),ans);
        return ans;
    }
}