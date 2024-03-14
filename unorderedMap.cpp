#include<bits/stdc++.h>
using namespace std;

// key  , Value 
// unqiue , anydata
int main()
{
    // unordered_map <string , int> m1;
    //     string name;
    //     int value;

    // for (int i=1;i<=3;i++)
    // {
    //     cout<<"enter city name and population  ";
    //     cin>>name>>value;

    //     m1[name] = value ;
    // }
    // for(auto i : m1)
    //     cout<<i.first<<"  "<<i.second<<endl;
    //     // O(log(n))
    //     // O(1)
    // try{
    // cout<<m1.at("delhi");
    // }
    // catch(const out_of_range &e)
    // {
    //     cout<<"Key data not found ";
    // }
    ///////////////////////////////////////////////

    unordered_map <int, int > m1;
    m1 = { {1,100}, {2,200},{3,300},{4,400},{5,500},{6,600},{7,700},{3,300},{12,312},{13,345} };
    // cout<<m1.bucket(3)<<endl;
    // cout<<m1.bucket(12)<<endl;
    // cout<<m1.bucket_count()<<endl;
    // cout<<m1.bucket_size(1);
    auto i = m1.find(3);
    cout<<i->first;
    if(m1.find(200) == m1.end() )
        cout<<"KEy not found ";
    else
        cout<<"Found ";
    cout<<m1.count(4);
}