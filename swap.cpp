#include <iostream>
using namespace std;

int main() 
{
    int a, b, variable;
    cout << "enter two nos which you want to swap"<<endl;
    cin >>a>>b;

    variable= a;
    a= b;
    b= variable;

    cout <<a<<" "<< b;

    return 0;
}