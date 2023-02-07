#include <iostream>
using namespace std;


main()
{
    int size,chkpoint;
    bool flag=false;
    cout<<"enter element :";
    cin>>size;
    int array[size];
    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter number :";
        cin>>array[idx];
       

    }
    cout<<"enter number to find :";
    cin>>chkpoint;
    for(int idx=0;idx<size;idx++)
    {
    if(chkpoint==array[idx])
    {
        flag=true;
    }
    } 
    if(flag==true)
    {
        cout<<"number found ";
    }
    else 
    {
        cout<<"number not found";
    }
}
    
    
