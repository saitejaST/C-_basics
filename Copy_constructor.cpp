#include <iostream>
using namespace std;
class samplecopyconstructor{
    private:
    int x,y;
    public:
    samplecopyconstructor(int x1,int y1){
        x=x1;
        y=y1;
    }
    samplecopyconstructor(const samplecopyconstructor &sam){
        x=sam.x;
        y=sam.y;
    }
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    samplecopyconstructor obj1(10,20);
    samplecopyconstructor obj2=obj1;
    cout<<"The normal (initial) constructor is";
    obj1.display();
    cout<<"THe copy constructor is ";
    obj2.display();
    return 0;
}