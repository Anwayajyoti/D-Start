#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1=0,a2=1,s,n;
    cout<<"Enter the nth number"<<endl;
    cin>>n;
    cout<<a1<<" "<<a2<<" ";
    for(int i=2;i<n;i++)
    {
        s=a1+a2;
        cout<<s<<" ";
        a1=a2;
        a2=s;
    }
    
}