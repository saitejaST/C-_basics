#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    float n,width,height,i;
    cin>>n;
    int count==0;
    for(i=0;i<n;i++){
        cin>>width>>height;
        if(height/width>=1.6&&height/width<=1.7)
        count++;
        else if(width/height>=1.6&&width/height<=1.7)
        count++;
    }
    cout<<count+1;
    return 0;

}