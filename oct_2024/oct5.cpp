#include<bits/stdc++.h>
using namespace std;

bool perm_check(string &, string &);
int main()
{
    string s1 = "adc";
    string s2 = "dcda";
    bool s = perm_check(s1, s2);
    cout << s;
    return 0;
}

bool perm_check(string& s1,string& s2){
    sort(s1.begin(), s1.end());
    for (int i = 0; i <= s2.size() - s1.size(); i++){
        auto k = s2.substr(i, s1.size());
        sort(k.begin(), k.end());
        if(k == s1){
            return true;
        }
    }
    return false;
}

// time complexity : O(N∗M∗Log(M))