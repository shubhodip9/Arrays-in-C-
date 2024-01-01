#include<iostream>
using namespace std;
void enterArray(int* , int);
int main()
{
    int n,target;
    cout<<"Enter size of Array"<<endl;
    cin>>n;
    cout<<"Enter target sum"<<endl;
    cin>>target;

    int A[100];
    enterArray(A , n);
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(( A[i] + A[j]) == target)
            {   cout << A[i] << " + " << A[j] << " = " << target << endl;
                break; }
        }
    }

}
void enterArray(int array[] , int size)
{
    cout<<"Enter elements"<<endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> array[i];
    }
}