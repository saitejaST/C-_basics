#include <iostream>
using namespace std;
class vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<<"Tuut, tuu";
    }
};
class Car:public vehicle{
    public:
    string model="mustang";
};
int main()
{
    Car mycar;
    mycar.honk();
    cout<<mycar.brand+" :" +mycar.model;
    return 0;
}

#include <iostream>
using namespace std;
class parent{
    public:
    void myfunc(){
        cout<<"Hello there";
    }
};
class child:public parent{
    
};
class grandchild:public child{
};
int main(){
    grandchild myobj;
    myobj.myfunc();
    return 0;
}