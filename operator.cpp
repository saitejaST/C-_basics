#include <iostream>
using namespace std;
class Number{
    private:
    int x;
    public:
    Number()
    {x=0; };
    Number(int n)
    {x=n; }
    void operator -()
    {x=-x;}
    void show_data()
    {cout<<"\n x= "<<x ; }
};
int main()
{
    Number N(7);
    N.show_data();
    -N;
    N.show_data();
}