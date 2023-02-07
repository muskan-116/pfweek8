#include <iostream>
using namespace std;


main()
{
int size,sum=0;
float average=0;
cout<<"enter a number :";
cin>>size;
int array[size];
for(int idx=0;idx<size;idx++)
{
cout<<"enter a number :";
cin>>array[idx];
sum=sum+array[idx];
}
cout<<"sum of numbers is :"<<sum<<endl;
average=sum/size;
cout<<"average is :"<<average;




}