class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0,element =INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(element != nums[i])
            {
                 element = nums[i];
                 nums[index++] = element;
            }   
            else
               continue;
        }
        return index;
    }
};
