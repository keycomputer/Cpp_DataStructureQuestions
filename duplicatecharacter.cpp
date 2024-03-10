#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string name;
    // cin>>name;
    // int alphabets[256] = {0}; // index -> character  Value -> frequency 
    // for(int i=0;i<256;i++) // frequency - start with 0 
    //     alphabets[i] = 0; 
    
    // for(int i=0; i<name.length() ;i++) // using ascii value of a character -> increasing freq by 1 
    //     alphabets[ name[i]]++; 
    
    // for(int i=0; i<256;i++) // 
    // {
    //     cout<<alphabets[i] <<  "   "<<(char)i<<endl;
    //     // if(alphabets[i] > 1 ) // check duplicate 
    //     //     cout<<(char)i<< "  ";
    // }

    string name;
    cin>>name;
    unordered_map<char, int> m1; // key -> first , Value -> second 
    for(int i=0;i<name.length();i++)
//        m1[name[i]]++; /// name[i] -> alphabet -> ASCII  -> Key of M1 (Value increase by 1)
    {
        if (m1.count(name[i]) == 0 )
            m1[name[i]] = 1 ;  // insert 
        else
            m1[name[i]]  = m1[name[i]] + 1;  // Value increase 
    }
    for(auto i : m1) // for next 
    {
        if(i.second > 1)
            cout<<i.first<<" ";
    }
}