#include<iostream>
using namespace std;
main()
{
    
    string sentence ;
    cout<<"enter next sentence:";
    getline(cin,sentence);
    cout<<"something ";
    
    for(int idx=0;idx<sentence.length();idx++)
    {
        cout<<sentence[idx];
        
    
    }
}