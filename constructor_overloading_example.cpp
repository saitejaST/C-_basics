#include <iostream>
using namespace std;
class Employee{
    private:     //access specifiers
    int age;
    public:
    Employee(){    //default constructor if no parameters are there then it will return as age 20
        age=20;
    }
    Employee(int x){     //parameterized constructor means age=parameter
        age=x;
    }
    int getAge(){            //We can use "get or set" for the accessible of the private keyword
        return age;
    }
};
int main()
{
    Employee person1;
    Employee person2(45);
    cout<<"The age of the first person is "<<person1.getAge()<<endl;
    cout<<"The age of the second person is "<<person2.getAge()<<endl;
}