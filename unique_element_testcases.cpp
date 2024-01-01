#include<iostream>
using namespace std;
void enterArray ( int* , int);
void uniqueElement ( int* , int);
int main()
{
    int t , n;
    int a [1000];
    cout << "Enter the number of Test Cases (t) :" << endl;
    cin >> t;

    for(int i = 1 ; i <= 100 ; i++ )
    {
        if(i > t) break;
        cout << "Enter Size of Array (N) :" << endl;
        cin >> n;
        if( n > 1000) exit(0);
        enterArray ( a , n);
    }
    uniqueElement ( a , n);
}
void enterArray ( int a[] , int size)
{
    for(int i=0 ; i < size ; i++)
    {
        cin >> a[i] ;
    }
    cout << endl;
}
void uniqueElement (int a[] , int size)
{
    int flag = 0;
    cout << "Displaying Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    for( int i = 0; i < size; i++)
    {
        for(int j = 0 ; j < i; j++)
        {
            if( a[j] == a[i])
            { flag = 1; break; }
        }
        for(int k= i+1 ; k < size ; k++)
        {
            if( a[k] == a[i])
            { flag = 1; break; }
        }
        if (flag == 0)
        {
            cout << endl << "Unique Element : " << a[i] << endl;
            cout << "Index : " << i << endl;
            cout << "Position : " << i+1 << endl;
        }
        flag = 0;
    }
}
