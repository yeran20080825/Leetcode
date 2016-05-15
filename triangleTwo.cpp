//
// Created by aran on 16-5-15.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vals;

        vals.resize(rowIndex + 1, 1);

        for(int i = 0; i < rowIndex + 1; ++i) {
            for(int j = i - 1; j >= 1; --j) {
                vals[j] = vals[j] + vals[j - 1];
            }

        }

        return vals;
    }
};

int main(){
    Solution solution;
    int num;
    cin>>num;
    vector<int > triangle =solution.getRow(num);
    for(int i=0;i<num;i++)

            cout<<triangle[i];



}
