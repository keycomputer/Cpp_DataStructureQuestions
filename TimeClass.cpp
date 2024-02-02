#include<iostream>
using namespace std;
class Time{
    private:
    int h, m, s;
    // 24 HR     
    void convert()
    {
        if (s >=60 )
        {
            m += (s/60);
            s %= 60;  // s = s % 60 // 125 % 60 
        }
        if(m >=60)
        {
            h += (m/60);
            m %= 60;
        }
    }
    public:
    // Time() // default constructor 
    // {
    //     h = m = s = 0;
    // }
    Time() : h(0), m(0), s(0) { }
    // Time (int a, int b, int c) // parameterized 
    // {
    //     h = a;
    //     m = b ;
    //     s = c;
    // }
    Time(int a, int b, int c) : h(a), m(b), s(c){} 
    Time(int a) : h(a), m(0), s(0) {} 
    Time (int a, int b): h(a), m(b), s(0) {} 
    void input() {
        cout<<"Enter H, m, s ";
        cin>>h>>m>>s;
    }
    void display()
    {
        convert();
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    ~Time(){cout<<"Destructor Called ";}
};
class Format : public Time
{
    string type;
    public:
    void input()
    {
        Time::input();
        cout<<"Enter hour format ";
        cin>>type;
    }        
    void display()
    {
        Time::display();
        cout<<type<<endl;
    }
};
int main()
{
    // Time obj1(2, 180, 125);
    // obj1.display();
    Format f1;
    f1.input();
    f1.display();
}
