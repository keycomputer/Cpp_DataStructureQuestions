// Count number of equal pairs in a string

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
  public:
    long long int equalPairs (string s)
    {
        long long sum=0;
        long long  freq[256]={0} ;
        for(int i=0;i<s.length();i++)
            freq[ s[i]]++;
        for(int i=0;i<256;i++)
            sum += freq[i] * freq[i];
        return sum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.equalPairs (s) << endl;
	}
}
// } Driver Code Ends