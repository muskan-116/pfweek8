#include <iostream>
using namespace std;


main()
{
    float totalamount,sum=0;
    cout<<"enter the total amount :";
    cin>>totalamount;
    float array[4];
    for(int idx=0;idx<4;idx++)
    {
        float totalprice=0;
        if(idx==0)
        {
            cout<<"enter quarters :";
            cin>>array[0];
            totalprice=0.25*array[0];
        }
        else if(idx==1)
        {
            cout<<"enter dimes :";
            cin>>array[1];
            totalprice=0.10*array[1];
        }
        else if(idx==2)
        {
            cout<<"enter nickels :";
            cin>>array[2];
            totalprice=0.05*array[2];
        }
        else if(idx==3)
        {
            cout<<"enter pennies :";
            cin>>array[3];
               totalprice=0.01*array[3];
        }
        sum=sum+totalprice;

        if(sum>=totalamount)
        {
        cout<<"true";
        }
        else{cout<<"false";}
        
        

        
        
        

    }




















}