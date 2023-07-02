class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        int m=nums[0];
        for(int i=0;i<nums.size();i++){
              ans=ans+nums[i];
              m=max(m,ans);
              if(ans<0)
                 ans=0;
        }
        return m;
    }
};

// i=0    ans=5  m=5
// i=1    ans=9  m=9
// i=2    ans=8  m=9
// i=3    ans=15 m=15
// i=4    ans=23 m=23
