//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> temp;
        temp.push_back(1);
        for(int i=2;i<=N;i++ )
        {
            int res =0 ;
            for(int j=0;j<temp.size();j++)
            {
                int t = temp[j] *i + res;
                temp[j] = t % 10;
                res = t / 10;
            }
            while(1)
            {
                if (res <=0)
                    break;
                temp.push_back(res%10);
                res = res / 10;
            }
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends