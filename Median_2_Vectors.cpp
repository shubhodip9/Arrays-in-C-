#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
double median2vectors( vector<int> , vector<int>);
int main()
{
    vector<int> A1 = {1 , 3};
    vector<int> A2 = {2};
    vector<int> B1 = {2 , 4};

    
    double ans;
    ans = median2vectors(A1 , A2);
    cout << "Median when size is Odd : " << ans << endl;
    ans = median2vectors(A1 , B1);
    cout << "Median when size is Even : " << ans << endl;
}
double median2vectors( vector<int> A, vector<int> B)
{
    vector<int> AB;
    AB.reserve( A.size() + B.size() );
    AB.insert( AB.end() , A.begin() , A.end() );
    AB.insert( AB.end() , B.begin() , B.end() );
    sort( AB.begin() , AB.end() );

    int size = AB.size();
    if( size % 2 != 0)
    {
        int middle = size / 2;
        double median = AB [ middle ] ;
        return median;
    }
    else
    {
        int middle = size / 2;
        double median = (AB [ middle ] + AB [ middle - 1 ])/2.0 ;
        return median;
    }
}