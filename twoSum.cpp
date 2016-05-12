//
// Title:
// Description: 
// Created by Aran on 16/5/12.
//
#include "Solution.h"
//
// Title:
// Description:
// Created by Aran on 16/4/14.
//


#include "Solution.h"
#include <algorithm>
#include <vector>
using namespace std;
vector<int> Solution::twoSum(vector<int>& nums, int target) {
    vector<int > number = nums;
    sort(number.begin(),number.end());

    int length = number.size();
    int left=0;
    int right=length-1;
    int sum=0;

    vector<int > index;

    while(left<right)
    {
        sum=number[left]+number[right];

        if(sum==target)
        {
            for(int i=0;i<length;i++)
            {
                if(nums[i]==number[left])
                {
                    index.push_back(i);
                }
                else if(nums[i]==number[right])
                {
                    index.push_back(i);
                }
                if(index.size()==2)
                    break;
            }
            break;
        }
        else if(sum > target)
        {
            --right;
        }
        else
        {
            ++left;
        }

    }
    return  index ;

}

