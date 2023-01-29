#include <iostream>
using namespace std;
int main()
{
    int a,b,c,min;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;
    cout<<"Enter your 3rd number: ";
    cin>>c;
    min=a;
    if(min>b)
    {min=b;}
    if(min>c)
    {min=c;}
    cout<<"Therefore the minimum number from the given numbers is:"<<min;
    return 0;
}


