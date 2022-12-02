#include<iostream>
using namespace std;
int main()
{
    int num,prime=0;
    cout<<"Enter any number: ";
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime==0)
    {
        cout<<num<<" is a prime number";
    }
    else
    {
        cout<<num<<" is not a prime number";
    }
    return 0;
}
