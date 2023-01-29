#include<iostream> 
class multiply {
int first,second;
public:
void getdata(int a,int b) 
{
first=a; second=b; 
} 
void display()
{
cout<<"first="<<first<<"second="<<second<<endl;
}
multiply operator *(multiply c);
};
void multiply::operator *(multiply c)
{
multiply temp; 
temp.first=first*c.first; 
temp.second=second*c.second; 
return temp;
}

#include <iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    person(int aage,string aaname){
        age=aage;
        name=aaname;
    }
};
int main()
{
    person p1(25,"saiteja");
    person p2(34,"john");
    person p3(45,"neharika");
    cout<<"the age and the name of the paticular person is "<<p1.age<<" "<<p1.name<<endl;
    cout<<"the age and the name of the second person is"<<p2.age<<" "<<p2.name<<endl;
    cout<<"the age and the name of the third person is "<<p3.age<<" "<<p3.name<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class cube{
    public:
    int side;
    cube(int x){
        side=x;
    }
};
int main()
{
    cube c1(10);
    cube c2(30);
    cube c3(40);
    cout<<c1.side<<endl;
    cout<<c2.side<<endl;
    cout<<c3.side<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class base{
    protected:
    int num=7;
};
class derived:public base{
    public:
    void myfunc()
    {
        cout<<"the value of the num is"<<num;
    }
};
int main()
{
    derived obj1;
    obj1.myfunc();
    return 0;
}

#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    void getNumber(void)
    {
        cout << "Enter an integer number: ";
        cin >> num;
    }
    int returnNumber(void)
    {
        return num;
    }
};

class Square : public Number {
public:
    int getSquare(void)
    {
        int num, sqr;
        num = returnNumber(); 
        sqr = num * num;
        return sqr;
    }
};

class Cube : public Number {
private:
public:
    int getCube(void)
    {
        int num, cube;
        num = returnNumber();
        cube = num * num * num;
        return cube;
    }
};

int main()
{
    Square objS;
    Cube objC;
    int sqr, cube;

    objS.getNumber();
    sqr = objS.getSquare();
    cout << "Square of " << objS.returnNumber() << " is: " << sqr << endl;

    objC.getNumber();
    cube = objC.getCube();
    cout << "Cube   of " << objS.returnNumber() << " is: " << cube << endl;

    return 0;
}