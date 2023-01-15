#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,sum=0;
    cout<<"Enter the 10 numbers of an Array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    cout<<"Sum of all the numbers of an array are "<<sum;
    return 0;
}