#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int i,j,temp;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0,j=size-1;i<=j;i++,j--)
    {
     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}