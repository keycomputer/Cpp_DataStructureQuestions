// Same characters in two strings
// https://www.geeksforgeeks.org/problems/c-corresponding-position-in-the-two-strings-that-hold-exactly-the-same-characters5013/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        // ctype -> tolower toupper 
        int c=0;
        for(int i=0;i<A.size();i++)
        {
            if(tolower(A[i]) == tolower(B[i]) )
                c++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends