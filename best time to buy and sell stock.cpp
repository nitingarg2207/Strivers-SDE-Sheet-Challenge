#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int minElement=prices[0];
    int maxProfit=0;
    for(auto x:prices){
        maxProfit=max(maxProfit,x-minElement);
        minElement=min(minElement,x);
    }
    return maxProfit;
}