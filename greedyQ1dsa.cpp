//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        int count = 1;
        vector<pair<int, int>>v1;
        for(int i=0;i<n;i++)
            v1.push_back({end[i], start[i]});
        sort(v1.begin(), v1.end());
        // ({(2,1), (3,2),(4,3),(6,5)})
        for(int i=1, j= 0;i<n;i++)
        {
            if (v1[i].second> v1[j].first)
            {
                count++;
                j = i;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends