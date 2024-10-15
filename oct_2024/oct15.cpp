#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "011";
    int l = 0;
    int r = 0;
    int res = 0;
    while(r < s.size()){
        if(s[r] != '1'){
            res += (r - l);
            l += 1;
            r += 1;
        }
        else{
            r += 1;
        }
    }
    cout << res;
    return 0;
}