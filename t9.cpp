//pointer
/*int    *x;    // a pointer to integer
double *x;    // a pointer to double
float  *x;    // a pointer to float
char   *ch     // a pointer to a character
& ----> address operator 

* -----> difference oprator


 */

#include <iostream>
using namespace std;
int main() {
	int  a = 27;  
	int* b= &a;     
    cout<< "This addres of a is "<<&a<<endl;
   cout<< "This addres of a is "<<b<<endl;
   cout<< "The value of addres b is"<<*b<<endl;
//pointer to pointer 
int** c= &b;
cout<<"The adsress of b is"
	return 0;
}
