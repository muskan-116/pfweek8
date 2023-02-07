#include <iostream>
using namespace std;
main()
{
    int size,largest=-10000;
    cout<<"enter number :";
    cin>>size;
    bool flag =false;
    int array[size];
    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter value : ";
        cin>>array[idx];

    }
    for(int idx=0;idx<size;idx++)
    {
        if(array[idx]>largest)
        largest=array[idx];
        flag=true;
    }
    if(flag==true)
    {
        cout<<"this is largest number :"<<largest;
    }
    else 
    {
        cout<<"not largest number ";
    }
}
