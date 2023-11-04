#include<bits/stdc++.h>
using namespace std;

struct Book{
    int ISBN;
    string BookTitle;
    int Price;
};

//useful functions to be passed to RadixSortISBN function for sorting.

int getMax(int isbn[], int n)
{
    int mx = isbn[0];
    for (int i = 1; i < n; i++)
        if (isbn[i] > mx)
            mx = isbn[i];
    return mx;
}
void countSort(int isbn[], int n, int exp)
{
 
    int output[n];
    int i, count[10] = { 0 };
 
    for (i = 0; i < n; i++)
        count[(isbn[i] / exp) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--) {
        output[count[(isbn[i] / exp) % 10] - 1] = isbn[i];
        count[(isbn[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++)
        isbn[i] = output[i];
}
//to sort the array of ISBN
void RadixSortISBN(int isbn[], int n){
   int m = getMax(isbn, n);
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(isbn, n, exp);
}
//to print array
void print(int isbn[], int n)
{
    for (int i = 0; i < n; i++)
        cout << isbn[i] << " ";
}

int main()
{
    //assumed data for use case
    Book book1,book2,book3,book4,book5,book6,book7,book8,book9,book10,book11,book12;
    book1.ISBN= 943747828;
    book2.ISBN= 134477827;
    book3.ISBN= 896757826;
    book4.ISBN= 211787825;
    book5.ISBN= 774747829;
    book6.ISBN= 329737828;
    book7.ISBN= 610707828;
    book8.ISBN= 490777829;
    book9.ISBN= 550717827;
    book10.ISBN= 576047821;
    book11.ISBN= 448007823;
    book12.ISBN= 100567829;
    int ISBN[12]= {943747828,134477827,896757826,211787825,774747829,329737828,610707828,490777829,550717827,576047821,448007823,100567829};
    int n = sizeof(ISBN) / sizeof(ISBN[0]);
    RadixSortISBN(ISBN, n);
    print(ISBN, n);               
    
    
    return 0;
}
