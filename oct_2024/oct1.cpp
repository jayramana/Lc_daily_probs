#include<bits/stdc++.h>
using namespace std;

bool pairFind(vector<int>&,int);

int main(){
  vector<int> arr {1,2,3,4,5,6};
  int k = 7;
  bool b = pairFind(arr, k);
  cout << b;
}

bool pairFind(vector<int>&arr,int k){
  for (int i = 0; i < arr.size(); i++){
    arr[i] = ((arr[i] % k) + k) % k;
  }

  map<int, int> freq;
  
  for(auto s : arr){
    auto m = freq.find(s);
    if(m == freq.end()){
      freq[s] = 1;
    }
    else{
      freq[s]++;
    }
  }
    // C++17 and above
    //   for (auto& [num,fre] : freq){
    //     if (num == 0) {
    //       if(fre % 2 != 0) return false;
    //     } else {
    //     int r = k - num;
    //     if (freq[r] != fre) {
    //         return false;
    //     }
    // }
    //   }
    for (map<int, int>::iterator it = freq.begin(); it != freq.end(); ++it){
        int num = it->first;
        int fre = it->second;

        if (num == 0) {
            if(fre % 2 != 0) return false;
        } else {
            int r = k - num;
            if (freq.find(r) == freq.end() || freq[r] != fre) {
                return false;
            }
        }
    }
  return true;
}

