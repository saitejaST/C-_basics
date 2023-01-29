#include <iostream>
using namespace std;
class construct{
    public:
    float area;
    construct(){
        area=0;
    }
    construct(int x,int y){
        area=x*y;
    }
    void display(){
        cout<<"THe area of the rectangle is "<<area<<endl;
    }
};
int main()
{
    construct o1;
    construct o2(20,30);
    cout<<"The area of the rectangle is"<<endl;
    o1.display();
    o2.display();
    return 0;
}

#include <iostream>
using namespace std;
class construct{
    public:
    int side;
    construct(){
        side=0;
    }
    construct(int x){
        side=x;
    }
};
int main(){
    construct o1;
    construct o2(20);
    cout<<o1.side;
    cout<<o2.side;
    return 0;
}

#include <iostream>
using namespace std;
class Person{
    private:
    int age;
    public:
    Person(){
        age=20;
    }
    Person(int x){
        age=x;
    }
    Person(float y){
        age=y;
    }
    int getage()
{
        return age;
    }
};
int main()
{
    Person person1;
    Person person2(30);
    Person person3(3.3);
   cout<<"Person1  age is"<<person1.getage();
   cout<<"person2 age is"<<person2.getage();
   cout<<"Person3 age is "<<person3.getage();
    return 0;
}

#include <iostream>
using namespace std;
class Accbalance{
    public:
    Accbalance(){
        cout<<"Zero salary";
    }
    Accbalance(int balance){
        if(balance>0)
        {cout<<"Positive salary";}
        else if(balance==0)
        {cout<<"Zero balance";}
        else
        {cout<<"Negative salary";}
    }
};
int main()
{
    Accbalance deftbalance;
    int balance;
    cin>>balance;
    Accbalance currbalance(balance);
    return 0;
}

#include <iostream>
using namespace std;
class number{
    public:
    int n1;
    int number1(){
        return n1;
    }
};
int main()
{
    number n2;
    cout<<"Enter the number which you wanna enter ";
    n2.number1();
    return 0;
}

#include <iostream>
using namespace std;
class sample{
    public:
    int age;
    void displayage(){
        cin>>age;
        cout<<"THe age of the person id "<<age<<endl;
    }
};
int main()
{
    sample s1;
    cout<<"ENter the age of the person";
    s1.displayage();
    return 0;
}
#include <iostream>
using namespace std;
class sample{
    public:
    int age;
    void display(){
        cout<<"THe age of the person is"<<age<<endl;
    }
};
int main()
{
    sample s1;
    sample s2;
    sample s3;
    cout<<"ENter the age of the 1st person";
    cin>>s1.age;
    s1.display();
    cout<<"Enter the age of the second person";
    cin>>s2.age;
    s2.display();
    cout<<"Enter the age of the third person";
    cin>>s3.age;
    s3.display();
    return 0;
}
//normal constructor functions
#include <iostream>
using namespace std;
class sample{
    private:
    int age;
    public:
    void displayage(int a){
        age=a;
        cout<<"The age of the person is"<<age<<endl;
    }
};
int main()
{
    sample obj1;
    int ageinput;
    cout<<"Enter the persons age";
    cin>>ageinput;
    obj1.displayage(ageinput);
    return 0;
}


//inheritance
#include <iostream>
using namespace std;
class fruits{
    public:
    int age;
    string name;
    void getdata();
    void display();
};
class apples:public fruits{
    public:
    void getdata(){
        cin>>age>>name;
    }
    void display(){
        cout<<"The age of the apples"<<age<<" and the name is"<<name;
    }
};
class oranges:public fruits{
    public:
    void getdata(){
        cin>>age>>name;
    }
    void display(){
        cout<<"The age of the fruit "<<age<<"And the name is"<<name;
    }
};
int main(){
    apples a1;
    cout<<"The information about the apples is";
    a1.getdata();
    a1.display();
    cout<<"The information about the oranges is ";
    oranges o1;
    o1.getdata();
    o1.display();
    return 0;
}
//templates
#include <iostream>
using namespace std;
template <class T>
T sum(T a,T b){
    T rs;
    rs=a+b;
    return rs;
}
int main()
{
    int i,j;
    float c,d;
    cout<<"Enter the two numbers that needs to performe the operation";
    cin>>i>>j;
    cin>>c>>d;
    cout<<"THe addition of the two integers is"<<sum(i,j)<<endl;
    cout<<"The addition of the two float numbers is"<<sum(c,d)<<endl;
    return 0;
}

#include <iostream>
using namespace std;
template <class T,class U>
void multiply(T a,U b)
{
    cout<<"The multiplication of two numbers"<<a*b<<endl;
}

int main()
{
    int i,j;
    float x,y;
    cout<<"Enter the two integer numbers";
    cin>>i>>j;
    cout<<"Enter the two floating numbers";
    cin>>x>>y;
    multiply(i,j);
    multiply(x,y);
    multiply(i,x);
    return 0;
}

#include <iostream>
using namespace std;
template <class T1,class T2>
class sample{
    T1 a;
    T2 b;
    void show(){
        cout<<a;
        cout<<b;
    }
};
int main()
{
    sample<int,float>test1(123,1.23);
    sample<float,char>test2(4.4,'w');
    test1.show();
    test2.show();
    return 0;
}

//try and catch blocks
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if(b!=0)
        {cout<<"The result when a is divided by b="<<a/b<<endl;}
        else
        {throw(b);}
    }
    catch(int i)
    {cout<<"Exception has caught";}
    return 0;
}


#include <iostream>
using namespace std;
class fruits{
    public:
    string name;
    fruits(){
        name="orange";
    }
    fruits(string specificfruit){
        name=specificfruit;
    }
};
int main()
{
    fruits o1;
    fruits o2("apple");
    cout<<o1.name<<endl;
    cout<<o2.name;
    return 0;
}


#include <iostream>
using namespace std;
class fruits{     //base class
    public:
    string name;
    void getdata();
    void display();
};
class apple:public fruits{        //derived class1
    public:
    void getdata(){
        cin>>name;
    }
    void display(){
        cout<<"The name of the fruit is "<<name;
    }
};
class orange:public fruits{          //derived class2
    public:
    void getdata(){
        cin>>name;
    }
    void display(){
        cout<<"The name od the fruit is "<<name;
    }
};
int main()
{
    apple a1;
    cout<<"The information about the fruit apple is";
    a1.getdata();
    a1.display();
    orange o1;
    cout<<"The information about the fruit orange is";
    o1.getdata();
    o1.display();
    return 0;
}
#include <iostream>
using namespace std;
class fruits{
    public:
    string name;
    void getdata();
    void display();
};
class oranges:public fruits{
    public:
    void getdata(){
        cout<<"Enter the name of the fruit";
        cin>>name;
    }
    void display(){
        cout<<"The name of the fruit is "<<name<<endl;
    }
};
class apple:public fruits{
    public:
    void getdata(){
        cout<<"Enter the name of the fruit";
        cin>>name;
    }
    void display(){
        cout<<"The name of the fruit is"<<name<<endl;
    }
};
int main()
{
    oranges o1;
    apple a1;
    cout<<"The information about the fruit 1 is";
    o1.getdata();
    o1.display();
    cout<<"The information aboyt the fruit 2 is ";
    a1.getdata();
    a1.display();
    return 0;
}