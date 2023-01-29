#include <iostream>
using namespace std;
class demo{
    int x,y,z;
    public:
    void getdata(int a,int b,int c){
        a=x;
        b=y;
        c=z;
    }
    void display();
    void operator-();
};
void demo::display()
{
    cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
}
void demo::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    demo obj1;
    obj1.getdata(10,20,30);
    obj1.display();
    -obj1;
    obj1.display();
    return 0;
}


