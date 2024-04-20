#include <iostream>
using namespace std;

// digits = 3 
// sum = 15
// 960
// 951
// 942


int main()
{
    int digits = 2, sum = 12;
    if ((sum ==0) || (digits  * 9 < sum ))
        cout<<"Not Combination ";
    int arr[digits];
    for(int i=0;i<digits;i++)
    {
        if(sum >= 9)
        {
            arr[i] = 9; sum = sum - 9;
        }
        else
        {
            arr[i] = sum;
            sum=0;
        }
    }
    for(int i=0;i<digits ;i++)
    {
        cout<<arr[i];
    }
    return 0;
}