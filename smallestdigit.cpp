#include <iostream>
using namespace std;
// smallest digit 
// digits = 3 
// sum = 15



int main()
{
    int digits = 2, sum = 17;
    if ((sum ==0) || (digits  * 9 < sum ))
        cout<<"Not Combination ";
    int arr[digits];
    sum = sum - 1;
    for(int i= digits-1;i>0;i--)
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
    arr[0] = sum + 1;
    for(int i=0;i<digits ;i++)
    {
        cout<<arr[i];
    }
    return 0;
}