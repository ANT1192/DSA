#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int arr[3]={2,3,4};
    int brr[4]={1,4,5,3};
    for(int i=0;i<4;i++)
    {
        
        if(arr[i]^brr[i]==0)
        {
          v.push_back(arr[i]);
          arr[i]=INT_MIN;
        }
        
    }
    for(int j=0;j<v.size();j++)
    {cout<<v[j]<<" ";}
    return 0;
}