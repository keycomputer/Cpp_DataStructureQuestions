//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/count-squares3649/1
// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
//         45

// 1
// 4
// 9
// 16
// 25
// 36

// 6.7
// 7 - 1 => 6
        // code here
        return ceil(sqrt(N)) -1 ; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends