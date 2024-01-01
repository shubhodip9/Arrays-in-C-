#include<iostream>
using namespace std;
int main()
{
    int arr[5], min = 0 , max = 4;
    cout << "Enter Elemensts" << endl;
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }
    cout << "Array in Normal Order: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    for(int i=0; i < 5/2; i++)
    {
        int temp = arr[min];
        arr[min] = arr[max];
        arr[max] = temp;
        min ++;
        max --;
    }
    cout << endl << "Array in Reverse Order: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
}