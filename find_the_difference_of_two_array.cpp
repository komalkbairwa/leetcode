class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        vector<vector<int>>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        ans.push_back(arr);
        ans.push_back(arr);
        int i=0,j=0;
        int temp;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j])
                temp=nums1[i];
            else if(nums1[i]<nums2[j]){
                ans[0].push_back(nums1[i]);
                temp=nums1[i];
            }
            else{
                ans[1].push_back(nums2[j]);
                temp=nums2[j];
            }
            while(i<nums1.size() && nums1[i] == temp){
                i++;
            }
            while(j<nums2.size() && nums2[j] == temp){
                j++;}
        }
        if(i<nums1.size()){
            temp = nums1[i];
            ans[0].push_back(nums1[i]);
            while(i<nums1.size()){
                if(nums1[i] == temp){
                    i++;
                }
                else{
                    ans[0].push_back(nums1[i]);
                    temp = nums1[i];
                }
            }
        }
        if(j<nums2.size()){
            temp = nums2[j];
            ans[1].push_back(temp);
            while(j<nums2.size()){
                if(nums2[j] == temp){
                    j++;
                }
                else{
                    ans[1].push_back(nums2[j]);
                    temp = nums2[j];
                }
            }
        }
        return ans;
    }
};
