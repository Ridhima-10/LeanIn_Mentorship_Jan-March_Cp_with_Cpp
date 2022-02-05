class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n,i,j,ans=-99999999;
        n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<n-1;i=i+2)
        {
            if(nums[i]!=nums[i+1])
            {
                ans=nums[i];
                break;
                
            }
        }
        if(ans!=-99999999)
            return ans;
        else
            return nums[n-1];
    }
};
