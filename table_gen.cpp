#include <iostream>
using namespace std;

int main()
{
    int a =1;
    int b;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<"\n"<<"***************************************************"<<"\n"<<"THIS IS RISHI RAJ TABLE BOOK"<<"\n"<<"Enter The Number For Which you Want to genrate Table For"<<'\n'<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<"\n"<<"***************************************************"<<endl;
    cout<<"ENTER THE NUMBER FOR WHICH YOU WANT TO PRINT TABLE FOR"<<"\n";
    cin>>b;
    do
    {
        cout<<b<<"x"<<a<<"="<<b*a<<"\n"<<"\n"<<endl;
        a++;
    } while (a<=10);
    
    return 0;

    
}