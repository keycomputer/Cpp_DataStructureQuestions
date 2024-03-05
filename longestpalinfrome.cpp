#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n = str.length(), sp =0 , ep = 1;
    int low, high;

    for(int i=0;i<n;i++)
    {
        low= i-1;
        high = i;
        while (low>=0 && high < n && str[low] == str[high])
        {
            if(high - low + 1 > ep)
                {
                    sp = low;
                    ep = high - low +1;
                }
            low--;
            high++;
        }
        low = i-1;
        high = i+1;

        while ()
    }

}