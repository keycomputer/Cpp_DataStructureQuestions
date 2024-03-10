#include<map>
#include<iostream>
using namespace std;
// Key : Value 
// mapped together 

int main()
{
    map<int , string> m1; // admno : Name 
    for(int i=1;i<=3;i++)
    {
        int id ;
        string name;
        cout<<"Enter admno no and name ";
        cin>>id>>name;
        m1[id] = name ; // insert [key] = Value ; 
    }
    // Pair 
    pair<int , string> p1;
    cout<<"Enter admno and name ";
    cin>>p1.first;
    cin>>p1.second;
    m1.insert(p1); // doesnot include -> duplicate Key 

    for(auto i = m1.begin(); i != m1.end(); i++) // iterator / pointer 
    {
        cout<<i->first<<"  "<<i->second<<endl; // -> arrow 
    }
    for(auto i : m1)
    {
        cout<<i.first<<"  "<<i.second<<endl;
    }
    cout<<m1.count(1);
}