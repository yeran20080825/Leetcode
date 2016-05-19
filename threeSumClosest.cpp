//
// Title:
// Description: 
// Created by Aran on 16/5/19.
//
#include <iostream>
#include <vector>
using  namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<2)
            return -1;
        int ret=0;

        sort(nums.begin(),nums.end());
        int distance = INT_MAX;
        for (int i = 0; i <nums.size()-2 ; ++i) {
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                int tmp_val = nums[i]+nums[j]+nums[k];
                int tmp_distance=abs(tmp_val-target);
                if (tmp_distance<distance){
                    distance=tmp_distance;
                    ret=tmp_val;

                }
                if (tmp_val<target)
                    j++;
                else
                    k--;
            }

        }
        return ret;
    }
};

int main(){
    Solution solution;
    vector<int > num1={1,1,-1,-1,3};

    int ret=solution.threeSumClosest(num1,-1);
      cout<<ret<<endl;

    return 0;



}