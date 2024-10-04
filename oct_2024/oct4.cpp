 // You are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. 
 // Divide the players into n / 2 teams of size 2 such that the total skill of each team is equal.

 // The chemistry of a team is equal to the product of the skills of the players on that team.

 // Return the sum of the chemistry of all the teams, or return -1 if there is no way to divide the players into teams such that the total skill of each team is equal.

// Input: skill = [3,2,5,1,3,4]
// Output: 22
// Explanation: 
// Divide the players into the following teams: (1, 5), (2, 4), (3, 3), where each team has a total skill of 6.
// The sum of the chemistry of all the teams is: 1 * 5 + 2 * 4 + 3 * 3 = 5 + 8 + 9 = 22.

#include<bits/stdc++.h>
using namespace std;

void skill(vector<int> &,int&);
int main()
{
    vector<int> skills = {1,1,2,3};
    int res = 0;
    skill(skills,res);
    cout << res;
    return 0;
}

void skill(vector<int>&skills,int& res){
    sort(skills.begin(), skills.end());
    int eq;
    int i = 0;
    int j = skills.size() - 1;
    while(i < j){
        int eq_c = skills[i] + skills[j];
        if(i == 0){
            eq = eq_c;
            res = res + (skills[i] * skills[j]);
        }
        else{
            if(eq_c != eq){
                res = -1;
                break;
            }
            else{
                res = res + (skills[i] * skills[j]);
                eq_c = 0;
            }
        }
        i += 1;
        j -= 1;

    }
}