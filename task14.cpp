#include <iostream>
using namespace std;


main()
{
    int size1;;
    cout<<"enter size :";
    cin>>size1;
    int size2;
    cout<<"enter size :";
    cin>>size2;
    int array1[1000];
    int array2[1000];
    for(int x=0;x<size1;x++)
    {
        cout<<"enter value :";
        cin>>array1[x];
    }
    
for(int t=0;t<size2;t++)

    {
        
        cout<<"enter value :";
        cin>>array2[t];
    }
    int array3[1000];
    int t=0;
    for(int idx=0;idx<size1+size2;idx++)
    {
        if(idx==0)
        {
            array3[idx]=array1[idx];
        }
     else if(idx>0 && idx<(size1+size2)-1)
    {
        array3[idx]=array2[t];
        t++;
    }
     else if(idx==size1+size2-1)
   {
    array3[idx]=array1[1];
   }
    }
    for(int idx=0;idx<size1+size2;idx++)
    {
        cout<<array3[idx]<<" ";
    }

}