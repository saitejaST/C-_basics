#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
  string samplestring="1234abcd";
    reverse(samplestring.begin(),samplestring.end());
    cout<<"Therefore the string is reversed and it is given below "<<samplestring;
    return 0;
}