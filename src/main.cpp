#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    char variable1 , variable2;

    cout <<"Introduce el primer número" <<endl;
    cin >> variable1 ;
    while( (variable1-48 < 0) || (variable1-48 > 9) ) cin>>variable1; 
    cout <<"Introduce el segundo número" <<endl;
    cin >> variable2 ;
    while( (variable2-48 < 0) || (variable2-48 > 9) ) cin>>variable2;


    n1=variable1-48;
    n2=variable2-48;

    n3=n1 + n2;

    cout <<"La suma es:" << n3 <<endl;

    return 0;
}
