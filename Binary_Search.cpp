#include<iostream>
using namespace std;
int main()
{
    int A[] = {1 , 3 , 5 , 7, 9 , 11};
    int key = 9 , first = 0 , last = 5;
    int mid;

    while(first <= last)
    {
        mid = first + (last - first) / 2;
        if(A[mid] == key)
        {
            cout << "Index : " << mid;
            exit(0);
        }
        
        else if(A[mid] < key)
        first = mid + 1;

        else
        last = mid - 1;
    }
    cout << key << " not found";
}