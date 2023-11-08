#include<bits/stdc++.h>
using namespace std;

int pivotElement(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int ls=0;
    int rs= sum;
    int ans;
    for(int i=0;i<n;i++)
    {
        rs= rs-arr[i];
        if(ls==rs)
        {
           return i;
        }
        ls = ls+ arr[i];
    }
    return -1;
}

int main()
{
    int arr[6]= {2,4,1,5,3,4};
    cout<<pivotElement(arr,6);
    return 0;
}