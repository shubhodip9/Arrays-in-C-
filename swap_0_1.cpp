#include<iostream>
using namespace std;
void displayArray(int* , int);
int main()
{
    int arr[8] = {1,1,0,0,1,0,0,0};
    displayArray(arr , 8);

    int i = 0 , j = 7;
    while ( i < j )
    {
        if(arr[i] == 0 && i<j)
        {
            i++;
        }
        if(arr[j] == 1 && i<j)
        {
            j--;
        }
        if(arr[i] == 1 && arr[j] == 0 && i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    displayArray(arr , 8);
}
void displayArray(int A[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}