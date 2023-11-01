#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int size)
{
    int s=0;
    int e= size-1;
    int mid= s + (e-s)/2;
    while(s<e)
    {
     if(arr[mid]<arr[mid+1])
      {
         s= mid+1;
      }
     else
      {
         e=mid;
      }
      mid= s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[10]= {0,1,2,3,7,5,4,3,2,1};
    cout<<peakElement(arr,10);
    return 0;
}