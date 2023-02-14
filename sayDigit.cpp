#include<bits/stdc++.h>
using namespace std;
void bolDe(int n, string arr[])
{
    if(n==0)
    {
        return ;
    }
    int digit=n%10;
    n=n/10;
    
    bolDe(n,arr);
    cout<<arr[digit]<<" ";


}
int main()
{
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bolDe(n,arr);
}