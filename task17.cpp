#include <iostream>
using namespace std;


main()
{

string name;


cout<<"enter name :";
cin>>name;
int idx=0;
while(name[idx]!='\0')
{
  
    if(name[idx]!='e'&& name[idx]!='a'&& name[idx]!='i' && name[idx]!='o' && name[idx]!='u')
    {
        
        cout<<name[idx];
   
    }
     idx++;
    
}

}

