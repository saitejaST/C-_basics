#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your two numbers= ";
    try{
        cin>>a>>b;
        if(b!=0)
        {cout<<"The result when a is divided by b is "<<a/b;}
        else
        {throw(b);}
    }
    catch(int num){
        cout<<"Dividing by zero exception caught";
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int age;
    try{
        cout<<"Please enter your age= ";
        cin>>age;
        if(age>=18)
        {cout<<"You are eligible for the voting process";}
        else
        {throw(505);}
    }
    catch(...)
    {cout<<"Acess denied you are not eligibile for the voting process";}
    return 0;
}

//finally statemet
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if(b!=0)
        {cout<<"Result is= "<<a/b;}
        else
        {throw(b);}
    }
    catch(int i)
    {cout<<"Exception caught";}
    __finally{
        cout<<"Division";
    }
    return 0;
}

//User defined Exception handler
#include <iostream>
#include <exception>
using namespace std;
class MycustomException:public exception{
    public:
    char * what(){
        return "Custom c++ exception";
    }
};
int main()
{
    try{
        throw MycustomException();}
        catch(MycustomException mce){
            cout<<"Caught Mycustomexception"<<endl;
            cout<<mce.what()<<endl;
        }
    }
//second example
#include <iostream>
#include <exception>
using namespace std;
class badlengthexception:public exception{
    public:
    int N;
    badlengthexception(N){
        this->N=N;
    };
    int what(){
        return this->N;
    }
}
int main()
{
    int username;
    cin>>username;
    try{
        if(username<5)
        throw badlengthexception(username);
        else
        {cout<<"Valid";}
    }
    catch(badlengthexception e){
        cout<<"Too short "<<e.what();
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your two numbers";
    cin>>a>>b;
    try{
        if(b!=0)
        {cout<<"Result when a is divided by b= "<<a/b;}
        else
        {throw(b);}
    }
    catch(int i)
    {cout<<"Exception has caught";}
    return 0;
}

//using multiple catch statements
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your two numbers";
    cin>>a>>b;
    try{
        if(b!=a)
        {
            float div=(float)a/b;
            cout<<div;
        }
        else
        throw b;
    }
    catch(int i)
    {cout<<"Exception has caught";}
    catch(int i)
    {cout<<"Exception has caught divided by 0";}
    catch(char st)
    {cout<<"Exception has caught division less than 1";}
    catch(...)
    {cout<<"Exception:unknown";}

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    try{
        int age;
        cout<<"Enter your age";
        cin>>age;
        if(age>18)
        {cout<<"You are eligible for the voting process";}
        else
        {throw 505;}
    }
    catch(...)
    {cout<<"Access denied you must be 18 years old";}
    return 0;
}
//userdefined exception
#include <iostream>
using namespace std;
class mycustomexception:public exception{
    public:
    char *what(){
        return "Custom C++ exception";
    }
};
int main(){
    try{
        throw mycustomexception();
    }
    catch(mycustomexception mce){
        cout<<"Custom exception has caught";
        cout<<mce.what();
    }
    return 0;
}

#include <iostream>
using namespace std;
class badlengthexception:pulbic exception{
    public:
    int N;
    badlengthexception(N){
        this->N=N;
    };
    int what(){
        return this->N;
    }
};
int main(){
    int usernamelength;
    cin>>usernamelength;
    try{
        if(usernamelength<6)
        throw badlengthexception(usernamelength);
        else
        cout<<"Valid";
    }
    catch(badlengthexception e)
    {cout<<"You are too short "<<e.what();}
    return 0;
}
