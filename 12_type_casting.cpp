//this program is for type casting it help us to change the data type fo=rom one form to another
// their are to methods
// 1 (data type)data
// 2data type (data)

#include <iostream>
using namespace std;

int main()
{
    double a=32.2545;
    float b=320.2;

    cout<<"the sum of a and b with help of type casting "<<int(a+b)<<'\n';
    cout<<"the sum of a and b with help of type casting "<<(int)a+(int)b;
}