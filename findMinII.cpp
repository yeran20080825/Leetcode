//
// Created by Aran on 2016/05/22.
//

class Solution {
public:
    int findMin(vector<int>& nums) {

        int j=nums.size()-1;
        if (nums.size()<=1)
            return nums[0];
        if (nums[0]>=nums[nums.size()-1]){
            while(j){
                if (nums[j-1]<=nums[j]&&j!=1)
                    j--;
                else
                    return nums[j];
            }

        }
        else
            return nums[0];
        return 0;

    }
};