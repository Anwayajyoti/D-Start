#include<bits/stdc++.h>
using namespace std;
int pow(int n)
{
    if(n==1)
    return 2;
    else
    return 2*pow(n-1);
}
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int res=pow(n);
    cout<<"Result "<<res;
}