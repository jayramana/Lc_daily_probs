#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums {10,10,10,10,10};
    int k = 5;
    priority_queue<int> res(nums.begin(),nums.end());
    int su = 0;
    int op = 0;

    for (int i = 0; i < k;i++){
        int mxV = res.top();
        su += mxV;
        res.pop();

        mxV = ceil(mxV / 3);
        res.push(mxV);
    }
    cout << su;

    return 0;
}