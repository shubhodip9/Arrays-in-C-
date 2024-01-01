#include<iostream>
using namespace std;
void printArray ( int* , int );
void swapAlternateArray( int* , int );

int main()
{
    int a[]={1,3,4,5,9,7};
    cout<< "Displaying Array with Even number of Elements" << endl;
    printArray( a , 6);
    cout<< "Displaying Swappped Array with Even number of Elements" << endl;
    swapAlternateArray( a , 6 );
    printArray( a , 6 );
    cout << endl;
    
    int b[]={1,3,2,4,5};
    cout<< "Displaying Array with Odd number of Elements" << endl;
    printArray( b , 5 );
    cout<< "Displaying Swappped Array with Odd number of Elements" << endl;
    swapAlternateArray( b , 5 );
    printArray( b , 5 );
    cout << endl;
}
void printArray (int a[], int size)
{
    for(int i=0 ; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void swapAlternateArray ( int a[], int size)
{
    for(int i=0; i< size-1; i+=2)
    {
        int temp = a[i+1];
        a[i+1] = a[i];
        a[i] = temp;
    }
}