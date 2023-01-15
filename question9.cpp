#include<iostream>
using namespace std;
int main()
{
    int n1,n2,max;
    cout<<"Enter the two numbers:";
    cin>>n1>>n2;
    if(n1>n2)
        cout<<"Max number is "<<n1;
    else
        cout<<"Max number is "<<n2;
    return 0;
}