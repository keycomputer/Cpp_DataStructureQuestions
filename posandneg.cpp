//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int arr1[n]; // positive
        int arr2[n]; // negative
        int i,n1, n2;
        for(i=0,n1=0,n2=0; i<n ; i++)
        {
            if(arr[i]>=0)
                arr1[n1++] = arr[i];
            else
                arr2[n2++] = arr[i];
        }
        for(int i=0  ;i < n1;i++)
            arr[i] = arr1[i];
            //  1 3 2 1 6 
            // -1 -7 -5 
        for(int i=0,j=n1; i < n2, j<n ; i++,j++)
            arr[j] = arr2[i];

    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends