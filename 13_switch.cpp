#include <iostream>
using namespace std;

int main()
{

    int age;
    cout<<"enter your age"<<"\n";
    cin>>age;
    // switch(age):
    //     case age<18 :
    // cout<<"Abhi land bara nahi hua hai beta"<<endl;
    // //case age>18:

    switch (age)
    {
    // case (age>18):
    case 18:
        if (age<10)
        {
          cout<<"if statement is running "<<endl;
          
         
        }
        else
        {
            cout<<"else statement is running"<<endl;

        }
     
        break;
    
    default:
        break;
    }
    
    return 0;
    
    
}