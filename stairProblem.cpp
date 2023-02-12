#include<bits/stdc++.h>
using namespace std;
int stairs(int n)
{
    if((n==1)||(n==2))
    {
        return n;
    }
    int stairs1=stairs(n-1);
    int stairs2=stairs(n-2);
    int ways = stairs1 + stairs2;
    return ways;
}
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<stairs(n);
}