#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    int i;
    int alphabets=0,num=0;
    cout<<"Please enter your letter"<<endl;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {alphabets++;}
        else if (str[i]>='0'&&str[i]<='9')
        {num++;}
    }
    cout<<"The number of alphabets present in the word are "<<alphabets<<endl;
    cout<<"The number of digits that are present are "<<num;
    return 0;
}