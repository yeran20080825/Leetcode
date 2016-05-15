/*********************************
*   日期：2016-5-15
*   作者：Aran
*   题号: Pascal's Triangle
*   来源：https://leetcode.com/problems/pascals-triangle/
*   结果：AC
*   来源：LeetCode
*   总结:
**********************************/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int >> vals;
        vals.resize(numRows);      //设置二维数组大小
        for(int i=0;i<numRows;i++){
            vals[i].resize(i+1);
            vals[i][0]=1;
            vals[i][vals[i].size()-1]=1;
            for (int j = 1; j <vals[i].size()-1 ; j++) {
                vals[i][j]=vals[i-1][j-1]+vals[i-1][j];
            }
        }
        return vals;
    }

};

int main(){
    Solution solution;
    int num;
    cin>>num;
    vector<vector<int >> triangle =solution.generate(num);
    for(int i=0;i<num;i++){
        for (int j = 0; j <i+1 ; j++)
            cout<<triangle[i][j];

        cout<<endl;}

}