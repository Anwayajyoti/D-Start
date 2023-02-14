#include<bits/stdc++.h>
using namespace std;
int sumNikal(int arr[], int size)
{
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    int remaining = sumNikal(arr+1,size-1);
    int total = arr[0]+remaining;
    return total;
}
int main()
{
    int arr[]={3,2,5,1,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<sumNikal(arr,size);
}