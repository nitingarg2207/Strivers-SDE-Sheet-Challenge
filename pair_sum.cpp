#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   unordered_map<int,int> m;
   for(auto x:arr){
      m[x]++;
   }

   vector<vector<int>> ans;
    for (auto x : arr) {
        if (m[s - x]) {
            int n;
            if (x != s - x) {
                n = m[x] * m[s - x];
            } else {
                n = m[x] * (m[x] - 1) / 2;
            }
            for (int i = 0; i < n; i++) {
                ans.push_back({min(x, s - x), max(x, s - x)});
            }
            m[x] = 0;
            m[s - x] = 0;
        }
    }

   sort(ans.begin(),ans.end());
   
   return ans;
}