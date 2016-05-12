//
// Created by Aran on 2016/05/12.
//
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int j=0;
        int k=0;
        for (int i = 1; i <nums.size() ; ++i) {
            if(nums[j]==nums[i])
            {   k++;
                if(k<2)
                    nums[++j]=nums[i];
            }

            else{
                nums[++j]=nums[i];
                k=0;
            }

        }
        return j+1;
    }
};

int main() {

    vector<int > num ={1,2,2,2,3,3};
    Solution solution;

    cout<<"the len of new array is "<<solution.removeDuplicates(num)<<endl;
    return 0;
}