#include <iostream>
using namespace std;


main()
{
    int size;
    cout<<"enter a number :";
    cin>>size;
    int array[size];
    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter element :";
        cin>>array[idx];

        
    }
     for(int idx=size-1;idx>=0;idx--)
     {
        cout<<array[idx]<<" ";
     }
}