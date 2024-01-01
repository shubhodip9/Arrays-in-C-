#include<iostream>
using namespace std;
int main()
{
    int i, size = 5, xoren = 0;
    int A[] = { 1, 2, 3, 2, 4};
    for(i = 0; i < size; i++)
    {
        xoren = xoren ^ A[i];
    }
    cout << xoren << endl ; 
    for(i = 1; i < size; i++)
    {
        xoren = xoren ^ i;
    }
    cout << xoren << endl; 
} 