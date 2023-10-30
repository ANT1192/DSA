#include<iostream>
using namespace std;

int countSetBits(int a, int b)
{
    int count1=0;
    int count2=0;
    while(a)
    {
        count1 += a&1;
        a = a>>1;
    }
    while(b)
    {
        count2 += b&1;
        b = b>>1;
    }
    return count1 + count2;
}

int main()
{
   cout<<countSetBits(3,5);
   return 0;
}