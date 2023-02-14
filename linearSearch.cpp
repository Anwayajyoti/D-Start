#include<bits/stdc++.h>
using namespace  std;
bool searchKar(int arr[],int size,int n)
{
    if(size==0)
    return false;
    if(n==arr[0])
    return true;
    searchKar(arr+1,size-1,n);
}
int main()
{
    int arr[]={2,5,6,9,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    if(searchKar(arr,size,n))
    {
        cout<<"Nikal gaya";
    }
    else
    {
        cout<<"Nahi hai";
    }
}
