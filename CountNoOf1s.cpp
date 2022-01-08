/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int countNoOfOnes(int n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
        
    }
    return count;
}
int main()
{
    cout<<countNoOfOnes(8)<<endl;

    return 0;
}
/*===========================OUTPUT=====================*/