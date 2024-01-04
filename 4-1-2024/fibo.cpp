#include<iostream>
using namespace std;
int fib( int );
int main()
{
    cout << " Fibonacci Number = " << fib(4) << endl; 
}
int fib(int n) 
{
            int a = -1 , b = 1, c1 = 0 , c2 = 0;
            for(int i = 1 ; i <= n ; i++)
            {
                c1 = a + b;
                //cout << c << endl;
                a = b;
                b = c1; 
            }    
            a = -1 , b = 1;
            for(int i = 1 ; i <= n-1 ; i++)
            {
                c2 = a + b;
                //cout << c << endl;
                a = b;
                b = c2; 
            }
            return (c1 + c2);
}