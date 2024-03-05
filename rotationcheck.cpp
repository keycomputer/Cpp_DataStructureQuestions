#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2; 

    // ABCD
    // CBDA 
    // find -> npos 
    if (s1.length() != s2.length())
        cout<<"Not a rotation ";
    else{
        string s3 = s1 + s1 ; // join   ABCDABCD
        if (s3.find(s2) != string::npos)
            cout<<"Rotation ";
        else    
            cout<<"Not a ";
    }
}

