#include<bits/stdc++.h>
using namespace std;
int getsum(int n)
{
    if(n==0)
    return n;
    else
    return n+getsum(n-1);
}
int main()
{
    int n;
    cout<<"Enter the Nth value"<<endl;
    cin>>n;
    int sum=getsum(n);
    cout<<"The "<<n<<"th sum is: "<<sum;
}