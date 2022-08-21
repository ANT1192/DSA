#include<iostream>
using namespace std;

int main()
{
    int t,n,a[n];
    cin>>t;
    cin>>n;
    
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int temp,l=0;int r=n-1;
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    
}