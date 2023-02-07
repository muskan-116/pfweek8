#include <iostream>
using namespace std;


main()
{
    int resistance;
    
    
    float sum=0;
    cout<<"enter size of resistance :";
    cin>>resistance;
    float array[resistance];
    for(int idx=0;idx<resistance;idx++)
    {
        cout<<"enter resistance :";
        cin>>array[idx];
        sum=sum+array[idx];

    }
    cout<<"total resistance is :"<<sum <<"ohms";
}