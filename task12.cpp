#include <iostream>
using namespace std;


main()
{
string name;
int vowel,count=0;
cout<<"enter name :";
cin>>name;
int idx=0;
while(name[idx]!='\0')
{
   idx++;
    if(name[idx]=='e'|| name[idx]=='a'|| name[idx]=='i' ||name[idx]=='o' || name[idx]=='u')
    {
        count++;
    }
   
    
}
cout<<"number of vowels is :"<<count;













}




