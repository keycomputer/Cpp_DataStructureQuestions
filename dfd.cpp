#include <iostream>
using namespace std;
class Coordinate
{
    int a, b, c;
    public:
    Coordinate()
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Coordinate(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void input()
    {
        cin>>a;
        cin>>b;
        cin>>c;
    }
    void output()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    Coordinate operator+(Coordinate temp)
    {
        // temp.a = temp.a + a;
        // temp.b = temp.b + c;
        // temp.c = temp.c + c;
        // return temp;
        return Coordinate(a+temp.a, b +temp.b , c +temp.c);
    }
};
int main()
{
    Coordinate t1, t2, t3;
    t1.input();
    t1.output();
    t2.input();
    t2.output();
    t3 = t1 + t2;
    t3.output();
    t1.output();
    t2.output();
    return 0;
}