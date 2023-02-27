#include<bits/stdc++.h>
using namespace std;
void subset(vector<int> A,vector<int>output,int index, vector<vector<int>> &ans)
{
    if(index>=A.size())
    {
        ans.push_back(output);
        return ;
    }

    subset(A,output,index+1,ans);

    int element=A[index];
    output.push_back(element);
    subset(A,output,index+1,ans);

}
vector<vector<int> > subsets(vector<int>& A)
{
    // Suru yaha se hai
    vector<vector<int>> ans;
    vector<int>output;
    int index=0;
    subset(A,output,index,ans);
}
  
// Driver Code.
int main()
{
    // find the subsets of below vector.
    vector<int> array = { 1, 2, 3 };
  
    // res will store all subsets.
    // O(2 ^ (number of elements inside array))
    // because total number of subsets possible
    // are O(2^N)
    vector<vector<int> > res = subsets(array);
  
    // Print result
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
  
    return 0;
}