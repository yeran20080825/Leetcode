//
// Created by Aran on 2016/05/12.
//
#include <iostream>


using namespace std;

/*
 * Date：2016-05-11
 * Subject：27. Remove Element
 */

class Solution {
public:
    int removeElement(int A[], int n,int val) {
        int i=0;
        int j=0;
        for(i;i<n;i++){
            if(A[i]==val){
                continue;
            }
            A[j]=A[i];
            j++;
        }

        return j;

    }
};

int main() {

    int num[] ={1,2,2,2,3,3};
    Solution solution;

    cout<<"the len of new array is "<<solution.removeElement(num,6,2)<<endl;
    return 0;
}
