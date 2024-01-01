#include<iostream>
using namespace std;
int main()
{
    int xoren = 0;
    int a[] = {1 , 2 , 3 , 2 , 1};
    for(int i = 0 ; i < 5 ; i++)
    {
        xoren = xoren ^ a[i];
    }
    for(int i = 0 ; i< 5 ; i++)
    {
        if(xoren == a[i])
        {
            cout << "Unique Element : " << a[i] << endl;
            cout << "Position : " << (i+1) << endl;
            cout << "Index : " << i << endl;
        }
    }
}