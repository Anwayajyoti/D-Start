#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int b[10];
    mid=(start+end)/2;
    int i=start;
    int j=mid+1;
    int k=start;
    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
    b[k] = arr[i];
        k++;
        i++;
    }
    while (j <= end) 
    {
        b[k] = arr[j];
        k++;
        j++;
    }
    for(k=start;k<=end;k++)
    {
        arr[k]=b[k];
    }
}
void mergeSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
    
}
int main()
{
    int arr[7]={38,27,43,3,9,82,10};
    int size=7;
    mergeSort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}