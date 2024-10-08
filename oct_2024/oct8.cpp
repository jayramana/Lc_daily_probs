#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     stack<char> sk;
//     for (int i = 0; i < s.size(); i++){
//         if(s[i] == ']' && !sk.empty() && sk.top() == '['){
//             sk.pop();
//             continue;
//         }
//         else{
//             sk.push(s[i]);
//         }
//     }
//     string res = "";
//     while (!sk.empty()) {
//         res = sk.top() + res;  
//         sk.pop();
//     }
//     cout << int(ceil(res.size()/2 + 1)/2);

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "]][[[]]][[]][][[";
        int open = 0, close = 0;
        
        for (char ch : s) {
            if (ch == '[') {
                open++;  
            } else if (open > 0) {
                open--;  
            } else {
                close++; 
            }
        }

        
       cout <<  (close + 1) / 2; 

    return 0;
}