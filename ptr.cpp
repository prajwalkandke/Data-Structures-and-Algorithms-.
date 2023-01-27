// pointer in cpp
#include<iostream>
using namespace std;
/* int main(int argc, char const *argv[])
 {
    int var =20;


    int* ptr;

    ptr = &var;
    cout << "Value a ptr =" << ptr <<"\n";
    cout << "Value a var =" << var <<"\n";
    cout << "Value a *ptr =" << *ptr <<"\n";
    return 0;
 }*/


 /*
 there are three ways to define pointer
 # call-by-value
 #call- by-ref with pointer argument
 #call-by-ref with refer argument
 */



int main(int argc, char const *argv[])
{
    int a=5;
    int* b= &a;
    cout<<b;
    /*b is pointer which store the addres of the a*/
    //&---> adress of the operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<" the address of a is"<<b<<endl;
    //* ---> dereference of operator
      cout<<" the address of a is"<<*b<<endl;
      cout<<" the address of a is"<<5<<endl;


    return 0;
}


 