//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int isPalindrome(string S)
	{
	   // string s2 = S;   //abba    ->  abc
	   // reverse(s2.begin(), s2.end()); // abba  -> cba  
	   // return S == s2? 1 : 0 ; // true -> false '	   
	   int i,j;
	   for(i=0,j=S.length()-1;i<j ;i++,j--)
	   {
	       if(S[i] != S[j])
	            return 0;
	   }
	   return 1;
	}

};
int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends