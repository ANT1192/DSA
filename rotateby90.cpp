#include <bits/stdc++.h>
using namespace std;

 
#define n 4
  
void
rotatearray (int a[n][n]) 
{
  
for (int j = 0; j < n; j++)
    
    {
      
for (int i = n - 1; i >= 0; i--)
	
	{
	  
cout << a[i][j] << " ";
	
} 
cout << endl;

} 
 
} 
 
int

main () 
{
  
int a[n][n] =
    { {0, 10, 100, 1000}, {1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333,
								   3333} };
  
rotatearray (a);
  
return 0;

}
