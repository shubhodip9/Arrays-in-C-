#include<iostream>
using namespace std;
int main()
{
    int A[] = {1 , 2 , 3 , 4 , 5};
    int k;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout <<  "Happy i " << i << endl;
        for(int j = i+1 ; j < 5 ; j++)
        {
            cout << "Happy j " << j << endl;
            for( k = j+1 ; k < 5 ; k++)
            {
                cout << "Happy k " << i << " " << j << " " << k << endl;
            }
            cout << "Happy k " << k << endl;
        }
        
    }
}