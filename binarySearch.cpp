#include<bits/stdc++.h>
using namespace std;
bool isBinary(int arr[],int n,int start,int end)
{
    if(start>end)
    return false;

    int mid=start+(end-start)/2;

    if(arr[mid]==n)
    return true;
    if(n>arr[mid])
    isBinary(arr,n,mid+1,end);
    else
    isBinary(arr,n,start,mid-1);
}

int main(){
    
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int n;
    cout<<"Input Key"<<" ";
    cin>>n;
    cout<<"CHECKING: "<<isBinary(arr,n,0,5);
}