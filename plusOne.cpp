/*********************************
*   日期：2014-01-22
*   作者：Aran
*   题号: Plus One
*   来源：http://oj.leetcode.com/problems/plus-one/
*   结果：AC
*   来源：LeetCode
*   总结:
**********************************/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    vector<int> res(digits.size(),0);
        int sum=0;
        int one=1;
        for (int i = digits.size()-1; i >=0 ; i--) {
            sum=one+digits[i];
            one=sum/10;
            res[i]=sum%10;
        }
        if(one>0)
            res.insert(res.begin(),one);
        return res;
    }

};


int main() {

    vector<int> num ={9,9,9,9};
    Solution solution;
    vector<int> v = solution.plusOne(num);
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;


    return 0;
}