#include<bits/stdc++.h>
using namespace std;

int firstIndexofK(int arr[], int n, int k)
{
    int s=0;
    int e= n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
      if(arr[mid]==k)
      {
        ans= mid;
        e= mid-1;
      }
      else if(k>arr[mid])
      {
        s=mid+1;
      }
      else
      {
        e= mid-1;
      }
      mid= s + (e-s)/2;
    }
    return ans;
}

int lastIndexofK(int arr[], int n, int k)
{
    int s=0;
    int e= n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
      if(arr[mid]==k)
      {
        ans= mid;
        s= mid+1;
      }
      else if(k>arr[mid])
      {
        s=mid+1;
      }
      else
      {
        e= mid-1;
      }
      mid= s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[6]= {1,2,3,3,3,4};
    cout<< firstIndexofK(arr,6,3)<<endl;
    cout<< lastIndexofK(arr,6,3)<<endl;
    return 0;

}