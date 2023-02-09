#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if((n==0)||(n==1))
    {
    return n;
    }
    
    int fibo1=fibo(n-1);
    int fibo2=fibo(n-2);

    int calculation=fibo(n-1)+fibo(n-2);

    return calculation;
    
}
int main()
{
   
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<fibo(n);
}