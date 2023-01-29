#include <iostream>
using namespace std;
class Example{
    private:
    int number;
    double value;
    public:
    Example(){
        number=0;
        value=0;
    }
    Example(int num,double val){
        number=num;
        value=val;
    }
    ~Example()
    {
        cout<<"Example object is detected"<<endl;
    }
    Example(Example &a){
        number=a.number;
        value=a.value;
    }
    void data();
};
void Example:: data(){
    cout<<number<<"\n"<<value<<endl;
}
int main()
{
    int num;
    double val;
    cin>>num;
    cin>>val;
    Example ex1(num,val);
    Example ex2(ex1);
    ex1.data();
    ex2.data();
    return 0;
}