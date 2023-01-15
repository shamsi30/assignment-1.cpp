#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,avg; // n1,n2,n3 these all are 3 diffferent numbers 
    cout<<"Enter three numbers:";
    cin>>n1>>n2>>n3;
    avg = (n1+n2+n3)/3;
    cout<<"Average of three numbers = "<<avg;
    return 0;
}