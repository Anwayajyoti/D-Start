#include<bits/stdc++.h>
using namespace std;
void reverseKar(string &Str,int i,int j)
{
    if(i>j)
    return ;
    swap(Str[i],Str[j]);
    reverseKar(Str,i+1,j-1);
}

int main()
{
    string Str="abcde";
    reverseKar(Str,0,Str.length()-1);
    cout<<Str<<endl;
}