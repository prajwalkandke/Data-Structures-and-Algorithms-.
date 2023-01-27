#include<iostream>
  using namespace std;
  int main(int argc, char const *argv[])
  {
    
    //Arithmetic operation
    int a=4, b=5;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a  is "<<--a<<endl;
    
    //Assignment operators --> used to assign values to the variables
    //int a= 3 , b=9;
    //char d=d;


// comparison operators

 cout<<"The value of a == b is "<<(a==b)<<endl;
  cout<<"The value of a!= b is "<<(a!=b)<<endl;
   cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
     cout<<"The value of a <= b is "<<(a<=b)<<endl;
      cout<<"The value of a >= b is "<<(a>=b)<<endl;


//Logical Operators
cout<<"following are the logical operators  in c++" <<endl;
cout<<"following are the logical and operators  ((a==b) && (a<b)) is:" <<((a==b) &&  (a<b))<<endl;
cout<<"following are the logical or operators  ((a==b) || (a<b)) is:" <<((a==b) ||  (a<b))<<endl;
cout<<"following are the logical not operators  (!(a==b) && (a<b)) is:" <<(!(a==b))<<endl;
    return 0;
  }
  
