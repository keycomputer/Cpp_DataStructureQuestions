// cpp program string 
// gninrts marg

// string program cpp 

#include<bits/stdc++.h>
using namespace std;
void reversestring(string s)
{
    //string temp = "";
    // for(int i=0;i<s.length();i++)
    //     temp = s[i] + temp;
    // cout<<temp;

    for(int i=0,j=s.length()-1; i < j ;i++, j--)
        swap(s[i], s[j]);
    cout<<s;
}
void reversestringbyword(string s)
{
    string temp = "";
    string result="";
    for(int i=0;i<s.length();i++)
    {
        temp =  temp + s[i];
        if(s[i] == ' ')
        {
            result = temp + result;
            temp="";
        }
    }
    result = temp + result;
    cout<<result;
}
int main()
{
    string s = "cpp program string";
    //reversestring(s);
    reversestringbyword(s);
}