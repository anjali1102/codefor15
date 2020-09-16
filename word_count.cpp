#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,count=0;
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    for (i = 0;str[i]!='\0'; i++)
    {
        if (str[i]==' ' || str[i]==',' || str[i]=='.' && str[i+1]!='\0')
        {
            count++;
        }
    }
    cout<<count+1;    
    return 0;
}
