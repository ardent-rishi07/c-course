#include<iostream>
using namespace std;

const int c=07;

int main()
{
    int c=12;
    cout<<"the value of c is"<<c<<endl;
    // const int c=12;
    // cout<<"the value of copy c is"<<c<<endl;
    cout<<"the vale of Global c is "<<::c<<endl;
// the :: is used for refer global value variable
// if we write const int c the we cannot change
//    the data type check
int g=45.22;
long double e=45.25;
bool f=1;
double h=124.12;


cout<<"the size of the data type is"<<g<<"  "<<sizeof(g)<<endl; 
//"        "this method of giving space will consume space
cout<<"the size of the data type is "<<'e' <<"\t\t"<<sizeof(e)<<endl;
//'\t\t'(for space) or '\n\n\'(for new line ) do not use space as well time
 cout<<"the size of the data type is " <<f<<"\n\n"<<sizeof(f)<<endl;
//  ''this can be used for single \t or \n but when we have to put multiple space and or new line we use " "
 cout<<"the size of the data type is " <<h<<"\n\n"<<sizeof(h)<<endl;
   
   
   
   
   
   
    return 0;
}
