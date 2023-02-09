#include<iostream>
using namespace std;

int factorial(int n)
{
if (n<=1)
{
return 1;

}
else
{
return n*factorial(n-1);
}
}
int main()

{
int b;
cout<<"enter the value of b"<<endl;

cin>>b;
cout<<"the Factorial of the given number is "<<b<<"="<<factorial(b);
return 0;
}
