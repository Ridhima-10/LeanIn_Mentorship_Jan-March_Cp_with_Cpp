class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
       
        
        int n;
        n=nums.size();
        vector<int> a(n);
        
        for(int i=0;i<n;i++)
        {
            int m;
            m=(i+k)%n;
            a[m]=nums[i];
            
        }
        nums=a;
        
    }
};
