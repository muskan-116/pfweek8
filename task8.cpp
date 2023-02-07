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
        cout<<"the chahracter at index is "<<<<" "<<idx<<"is"<<" "<<name[idx]<<endl;
        idx++;
    }
}