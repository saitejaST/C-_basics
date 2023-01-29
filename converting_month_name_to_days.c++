#include <iostream>
using namespace std;
void printNumberOfDays(int N)
{
    if (N == 1 || N == 3 || N == 5
        || N == 7 || N == 8 || N == 10
        || N == 12) {
        cout<<"31 Days.";
    }
    else if (N == 4 || N == 6
             || N == 9 || N == 11) {
        cout<<"30 Days.";
    }
    else if (N == 2) {
        cout<<"28/29 Days.";
    }
    else {
        cout<<"Invalid Month.";
    }
}
int main()
{
    // Input Month
    int N = 4;
    printNumberOfDays(N);
  
    return 0;
}

//constructing a nested loop
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<10;i++){
        if(i<6){
            for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    else{for(int k=10;k>i;k--){
        cout<<"*";
    }
    cout<<"\n";
    }
}
return 0;
}