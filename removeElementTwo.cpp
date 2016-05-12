//
// Created by Aran on 2016/05/12.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElementTwo(vector<int>& nums, int val) {
        int i=0;
        int j=0;
        for(i;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }
            nums[j]=nums[i];
            j++;
        }

        return j;

    }

};

int main() {

    vector<int> num ={1,2,2,2,3,3};
    Solution solution;

    cout<<"the len of new array is "<<solution.removeElementTwo(num,2)<<endl;
    return 0;
}
