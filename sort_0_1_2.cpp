#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int a[3]={0};
   for(int i=0;i<n;i++){
      a[arr[i]]++;
   }
   int i=0;
   while(a[0]>0){
      arr[i++]=0;
      a[0]--;
   }
   while(a[1]>0){
      arr[i++]=1;
      a[1]--;
   }
   while(a[2]>0){
      arr[i++]=2;
      a[2]--;
   }
}