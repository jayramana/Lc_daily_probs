#include<bits/stdc++.h>
using namespace std;

// Two pointer approach but using stack 

int main()
{
    vector<int> nums{9,8,1,0,1,9,4,0,4,1};
    int res = INT_MIN;
    stack<int> i_s;
    int n = nums.size();

    for (int i = 0; i < n; i++){
        if(i_s.empty() || nums[i_s.top()] > nums[i]){
            i_s.push(i);
        }
    }

    for (int j = n - 1; j > 0; j -= 1){
        while(!i_s.empty() && nums[j] >= nums[i_s.top()]){
            res = max(res, j - i_s.top());
            i_s.pop();
        }
    }
    cout << res;
    return 0;
}