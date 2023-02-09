#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    int factorial = fact(n);
    cout<<"Factorial of "<<n<<" is: "<<factorial;
}