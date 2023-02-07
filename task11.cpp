#include <iostream>
using namespace std;


main()
{
    string name;
    char chkpoint;
    bool flag=false;
    cout<<"enter name :";
   getline(cin,name);
   cout<<"enter charcter :";
   cin>>chkpoint;
    int idx=0;
    while(name[idx]!='\0')
    {
        idx++;
    if(name[idx-1]==chkpoint)
    {
    flag = true;
    }
    }
    if(flag==true)
    {
        cout<<"same";
    }
    else
    {
        cout<<" not same";
    }
    }

   
    
    