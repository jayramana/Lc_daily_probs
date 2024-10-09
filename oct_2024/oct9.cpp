#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = ")))";
    int open = 0;
    int close = 0;
    for (auto k : s) {
        if (k == '(') {
            open++;
        }
        else if(k == ')' && open > 0){
            open--;
        } else {
            close++;
        }
    }
    return open + close;
}