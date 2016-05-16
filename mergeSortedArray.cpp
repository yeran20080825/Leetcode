//
// Created by aran on 16-5-16.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m+n-1;
        nums1.resize(m+n);
        int j=m-1;
        int k=n-1;
        while(i>=0){
            if (j>=0&&k>=0){
                if(nums1[j]>nums2[k]){
                    nums1[i]=nums1[j];
                    j--;
                }
                else{
                    nums1[i]=nums2[k];
                    k--;
                }
            }
            else if (j>=0){
                nums1[i]=nums1[j];
                j--;
            }
            else if(k>=0){
                nums1[i]=nums2[k];
                k--;
            }
            i--;
        }

    }
};

int main(){
    Solution solution;
    vector<int > num1={1,3,4,5,8};
    vector<int > num2={5,8,10,12,52,100};
    solution.merge(num1,5,num2,6);
    for(int i=0;i<num1.size();i++)
        cout<<num1[i]<<" ";

    return 0;



}