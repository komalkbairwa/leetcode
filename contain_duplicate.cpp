class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
              if(nums[i]==nums[i+1])
                 return true;
                
        }
        return false;
       /*int start = 0 , end = nums.size()-1;
       while(start<=end){
           if(nums[start]==nums[end])
              return true;
           start++;
           end--;
       }
       return false;*/
    }

};
