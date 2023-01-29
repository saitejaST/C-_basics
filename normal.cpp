#include <iostream>
using namespace std;
int main()
{
    float s,r;
    int cpool,spool;
    cout<<"Enter your side and the radius";
    cin>>s>>r;
    cpool=(3.14*r*r);
    spool=(s*s);
    if(cpool>=spool)
    {cout<<"I prefer center 1";}
    else
    {cout<<"I prefer center 2";}
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arnavspeed,arovspeed,speeddif;
    cout<<"ENter the respective speeds of the both persons";
    cin>>arnavspeed>>arovspeed;
    if(arnavspeed>arovspeed){
    speeddif=arnavspeed-arovspeed;
    cout<<speeddif;}
    else{
    speeddif=arovspeed-arnavspeed;
    cout<<speeddif;}
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n,dig=0,rem;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        dig=dig*10+rem;
        n/=10;
    }
    while(dig!=0)
    {
        rem=dig%10;
        switch(rem){
            case 0:
            cout<<"zero";
            break;
            case 1:
            cout<<"one";
            break;
            case 2:
            cout<<"two";
            break;
            case 3:
            cout<<"three";
            break;
            case 4:
            cout<<"Four";
            break;
            case 5:
            cout<<"five";
            break;
            case 6:
            cout<<"six";
            break;
            case 7:
            cout<<"seven";
            break;
            case 8:
            cout<<"eight";
            break;
            case 9:
            cout<<"nine";
            break;
        };
        dig/=10;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int number,rem,num,result;
    cin>>number;
    number=num;
    while(num!=0){
        rem=num%10;
        result+=rem*rem*rem;
        num/=10;
    }
    if(result==number)
    {cout<<"It is a part of the memorable coin";}
    else
    {cout<<"It is not a part of the memorable coin";}
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int nooffamilymembers,i,j;
    cout<<"Enter the number of family members";
    cin>>nooffamilymembers;
    for(i=nooffamilymembers;i>0;i--){
        for(j=0;j<i;j++)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i,t,l,h,n;
    cin>>t;
    while(t--){
        l=1;
        cin>>n;
        int count=0;
        for(i=1;i<=n;i++){
            cin>>h;
            if(h==l)
            {
                count+=2;
            }
            else if(h>l)
            {
                l=h;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int weightearth,moonweight;
    cout<<"Enter the weight of the person standing in the earth";
    cin>>weightearth;
    moonweight=0.166*earthweight;
    cout<<moonweight;
    return 0;
}
#include <iostream>
using namespace std;
class Happiness{
    public:int Meat(){
        int a,b,sum=0,max=100,n;
        cin>>n;
        while(n--){
            cin>>a>>b;
            if(b>=max)
            sum+=a*max;
            else
            sum+=a*b;
        }
        cout<<sum<<endl;
    }
};
int main()
{
    Happiness Purchase;
    Purchase.Meat();
    return 0;
}


#include <iostream>
#include <string.h>
using namespace std;
class adhar{
    public:
    void details(string fn,string mn,string ln){
        if(fn.empty()||mn.empty()||ln.empty())
        {cout<<"Invalid name";}
        else
        {cout<<fn<<""<<mn<<""<<ln;}
    }
};
int main()
{
    adhar name;
    string fn,mn,ln;
    cin>>fn>>mn>>ln;
    name.details(fn,mn,ln);
    return 0;
}

#include <iostream>
using namespace std;
class Friends{
    public:void gifts()
    {
        int i,a,n,b[50]={0};
        cin>>n;
        for(i=0;i<n+1;i++)
        {
            cin>>a;
            b[a]=i;
        }
        for(i=0;i<n+1;i++)
        cout<<b[i]<<" "
    }
};
int main()
{
    Friends sharing;
    sharing.gifts();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class indianarmy{
    public:resumeofcandiates(){
    long long n;
    cin>>n;
    long long k=n*(n-1)*(n-2)*(n-3)*(n-4)/120;
    cout<<k+k*(n-5)/6+(n-5)*(n-6)/42;
    return 1;
}
};
int main(){
    indianarmy groupofresumes;
    groupofresumes. resumeofcandiates();
    return 0;
}

#include <iostream>
using namespace std;
class complex{
    public:
    int r1,r2,r3,i1,i2,i3;
    complex(){cin>>r1>>i1;cin>>r2>>i2;}
    void addcomplex(){
        r3=r1+r2;
        i3=i1+i2;
    }
    void display(){
        cout<<r1<<"+"<<i1<<"i"<<endl;
        cout<<r2<<"+"<<i2<<"i"<<endl;
        cout<<r3<<"+"<<i3<<"i"<<endl;
    }
};
int main(){
    complex calculate;
    calculate.addcomplex();
    calculate.display();
    return 0;
}

#include <iostream>
using namespace std;
class student{
    public:
    void identity(string name,int id){
        cout<<name<<" "<<id<<endl;
    }
    void Identity(int id,string name){
        cout<<name<<" "<<id<<endl;
    }
};
int main()
{
    student details;
    string name;
    int id;
    cin>>name>>id;
    details.identity("saiteja",362);
    cin>>id>>name;
    details.Identity(372,"neharika");
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
class student{
    public:
    string name;
    int id;
    cin>>name>>id;
    void display(){
        cout<<name<<" "<<id<<endl;
    }
    void display2(){
        cout<<id<<" "<<name<<endl;
    }
};
int main(){
    student details;
    details.display();
    details.display2();
    return 0;
}