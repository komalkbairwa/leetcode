class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 0;
        int prod = 1;
        int idx = 0;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
               prod=prod*nums[i];
            else{
                 count++;
                 flag=1;
                 idx=i;
            }
        }
        if(count>1 && flag==1){
            for(int i=0;i<nums.size();i++)
               nums[i]=0;
        }
        if(count==1 && flag==1){
            for(int i=0;i<nums.size();i++)
               nums[i]=0;
            nums[idx]=prod;
        }
        else{
            for(int i=0;i<nums.size();i++){
                nums[i]=prod/nums[i];
            }
        }     
        return nums;
    }
};
