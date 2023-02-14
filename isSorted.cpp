#include<bits/stdc++.h>
using namespace std;
bool isIt(int arr[],int size)
{
    if((size==0)||(size==1))
    return true;
    if(arr[0]>arr[1])
    return false;
   return isIt(arr+1,size-1);
    

}
int main()
{
    int arr[]={2,4,6,9,11,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(isIt(arr,size))
    {
        cout<<"Sorted hai";
    }
    else
    {
        cout<<"Not Sorted";
    }
}