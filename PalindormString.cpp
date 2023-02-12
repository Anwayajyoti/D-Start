#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if(start>=end)
    {
    return true;
    }
    if(str[start]!=str[end])
    {
        return false;
    }
    return (str,start+1,end-1);
}

int main()
{
   string str;
   cout<<"Enter String"<<endl;
   cin>>str;

   int n=str.length();
   if(isPalindrome(str, 0, n-1))
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   return 0;
}