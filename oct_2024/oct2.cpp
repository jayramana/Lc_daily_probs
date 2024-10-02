#include<bits/stdc++.h>
using namespace std;

void oct(vector<int>&,vector<int>&);
int main()
{
    vector<int> arr{0,0,0,-1};
    vector<int> res{};
    oct(arr, res);
    for(int j = 0; j < arr.size(); j++){
        cout << res[j] << " ";
    }
    
    return 0;
}
void oct(vector<int>& arr,vector<int>& res){
    map<int, int> rank;
    vector<int> s_arr(arr.begin(),arr.end());
    
    sort(s_arr.begin(), s_arr.end());
    set<int> s_ar(s_arr.begin(), s_arr.end());

    int rnk = 1;

    for(auto k : s_ar){
        rank[k] = rnk++;
    }
    for(auto s : arr){
        res.push_back(rank[s]);
    }
}