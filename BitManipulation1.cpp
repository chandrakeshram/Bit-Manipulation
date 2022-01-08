/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============
Write a program to check if a number is power of 2 or 
not using Bit Manipulation
========================================================*/
#include <bits/stdc++.h>
using namespace std;
bool isPowerOf2(int n){                             
    return  (n && !(n & n-1)); 
}
int main()
{
    int n;
    cin>>n;
    cout<<isPowerOf2(n)<<endl;
    return 0;
}
/*===========================OUTPUT=====================*/




/*If a number is power of 2 then it will have only 1 set bit 
and the number 1 less than power of 2 number will have only 
one reset bit at the position of of set in the power of 2 
number
When we '&' the 2 numbers in binary format then we will 
get 0000 only*/