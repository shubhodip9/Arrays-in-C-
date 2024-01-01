/*
A [] = {1, 2, 3, 2, 1, 1}; (satisfies the condition)
1 --> 3
2 --> 2
3 --> 3

B[] = {1 , 2}; (does not satisfy the condition)
1 --> 1
2 --> 2
*/

#include<iostream>
using namespace std;
int main()
{
    int A [6] = {1, 2, 3, 2, 1, 1};
    int B[6];
    int flag =0 , count = 0, c = 0;
    for(int i = 0 ; i < 6 ; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(A[j] == A[i])
            flag = 1;
        }
        if(flag == 1) continue; 
        for(int j=i; j<6; j++)
        {
            if(A[j] == A[i])
            count ++;
        }
        B[c] = count; c++;
        cout << "Number of Occurrences of "<<A[i]<<" = "<<count<<endl; 
        count = 0;
    }
    for(int i = 0 ; i < c ; i++)
    {
        cout << B[i] << " ";
    }
    for (int i = 0; i < c; i++)
    {
        for(int j = i+1; j < c; j++)
        {
            if(B[i] == B[j])
            {
                cout << endl << "Doesn't satisfy condition" << endl;
                exit(0);
            }
        }
    }
    cout << endl << "Satisfies Condition" << endl;
}