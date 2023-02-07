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
        idx++;

    }
   
    for(int lenght=idx-1;lenght>=0;lenght--)
    {
        cout<<name[lenght];
    }
}
    