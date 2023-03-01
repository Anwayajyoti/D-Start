class Solution {
private:
    void solve(string digits,string output,int index,vector<string>&ans,string arr[])
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
        string value=arr[number];

        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,arr);
            output.pop_back();
        }


    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
       if(digits.length()==0)
       return ans;
        string output;
        int index=0;
        string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,arr);
        return ans;
    }
};