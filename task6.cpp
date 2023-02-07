#include <iostream>
using namespace std;


main()
{
    int number,next,product=0;
    cout<<"enter number :";
    cin>>number;
    int array[number];
for(int idx=0;idx<number;idx++)
{
    cout<<"enter number :";
    cin>>array[idx];
}
cout<<"enter multiple number :";
cin>>next;
for(int idx=0;idx<number;idx++)
{
product=next*array[idx];
cout<<product<<" ";
}
}
