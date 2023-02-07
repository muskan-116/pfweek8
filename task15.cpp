#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter name :";
    getline(cin,name);
    
    int idx=0;
    while(name[idx]!='\0')
    {
        
        
    
    if(name[idx] =='a')
    {
        name[idx]='b';
    }
    else if(name[idx]=='b')
    {
        name[idx]='c';
    }
    else if(name[idx]=='c')
    {
        name[idx]='d';
    }
    else if(name[idx]=='d')
    {
        name[idx]='e';
    }
    else if(name[idx]=='e')
    {
        name[idx]='f';
    }
    else if(name[idx]=='f')
    {
        name[idx]='g';
    }
    else if(name[idx]=='g')
    {
        name[idx]='h';
    }
    else if(name[idx]=='h')
    {
        name[idx]='i';
    }
    else if(name[idx]=='i')
    {
        name[idx]='j';
    }
    else if(name[idx]=='j')
    {
        name[idx]='k';
    }
    else if(name[idx]=='k')
    {
        name[idx]='l';
    }
    else if(name[idx]=='l')
    {
        name[idx]='m';
    }
    else if(name[idx]=='m')
    {
        name[idx]='n';
    }
    else if(name[idx]=='n')
    {
        name[idx]='o';
    }
    else if(name[idx]=='o')
    {
        name[idx]='p';
    }
    else if(name[idx]=='p')
    {
        name[idx]='q';
    }
    else if(name[idx]=='q')
    {
        name[idx]='r';
    }
    else if(name[idx]=='r')
    {
        name[idx]='s';
    }
    else if(name[idx]=='s')
    {
        name[idx]='t';
    }
    else if(name[idx]=='t')
    {
        name[idx]='u';
    }
    else if(name[idx]=='u')
    {
        name[idx]='v';
    }
    else if(name[idx]=='v')
    {
        name[idx]='w';
    }
   else  if(name[idx]=='w')
    {
        name[idx]='x';
    }
    else if(name[idx]=='x')
    {
        name[idx]='y';
    }
    else if(name[idx]=='y')
    {
        name[idx]='z';
    }
    else if  (name[idx]=='z')
    {
        name[idx]='a';
    } 
    cout<<name[idx];
     idx++;
}

}