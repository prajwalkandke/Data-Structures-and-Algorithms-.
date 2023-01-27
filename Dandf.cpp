//doubble and flot
/*The byte size for float is 4 while the byte size for double is 8.

This implies that double can store values that are twice the amount that float can hold.

We can see this by using the sizeof() operator. */
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double MY_DOUBLE_VALUE = 1.121242422;
    float MY_FLOAT_VALUE = 1.5986545;


cout << MY_DOUBLE_VALUE << endl;
cout <<MY_FLOAT_VALUE <<endl;

}
