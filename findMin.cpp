//
// Created by Aran on 2016/05/21.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {

        int j=nums.size()-1;
        if (nums[0]>nums[nums.size()-1]){
            while(j){
                if (nums[j-1]<nums[j])
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


int main() {

    vector<int> num ={4,7};
    Solution solution;

    cout<<"the minele of array is "<<solution.findMin(num)<<endl;
    return 0;
}