//
// Created by aran on 16-5-17.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        if(nums.size()<=2)
            return ret;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;++i){

            int j=i+1;
            int k=nums.size()-1;
            while (j<k){
                vector<int> curr;  //存储一轮查找符合条件的元组
                if(nums[i]+nums[j]+nums[k]==0){
                    curr.push_back(nums[i]);
                    curr.push_back(nums[j]);
                    curr.push_back(nums[k]);
                    ret.push_back(curr);
                    ++j;
                    --k;
                    while(j<k && nums[j-1]==nums[j])
                        ++j;
                    while (j<k && nums[k]==nums[k+1])
                        --k;
                }
                else if (nums[i]+nums[j]+nums[k]<0)
                    ++j;
                else
                    --k;
            }
            while (i<nums.size()-1 && nums[i]==nums[i+1])
                ++i;
        }

        return ret;

    
    }
};

int main(){
    Solution solution;
    vector<int > num1={-1 ,0, 1, 2, -1, -4};

    //vector<int > num2={5,8,10,12,52,100};
    vector<vector<int >> ret=solution.threeSum(num1);
    for(int i=0;i<ret.size();i++) {
        for (int j = 0; j < 3; ++j) {
            cout << ret[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;



}