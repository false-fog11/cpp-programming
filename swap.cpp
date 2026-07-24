#include <iostream>
using namespace std;

int main() 
{
    int a, b, temp;
    cout << "enter two nos which you want to swap"<<endl;
    cin >>a>>b;

    temp= a;
    a= b;
    b= temp;

    cout <<a<<" "<< b;

    return 0;
}