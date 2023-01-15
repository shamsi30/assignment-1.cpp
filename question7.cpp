#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sq = powf(n,2); // find square of a number.
    cout<<"Square of "<<n<<" is "<<n*n;
    return 0;
}