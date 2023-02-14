#include<bits/stdc++.h>
using namespace std;
void reachedHome(int src,int dest)
{
    // cout<<src<<" "<<dest<<" "<<endl;
    if(src==dest)
    {
        cout<<"Reached";
        return ;
    }
   
    reachedHome(src+1,dest);
}
int main()
{
    int src=1;
    int dest=10;
    reachedHome(src,dest);
}