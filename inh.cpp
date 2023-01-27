// inheritance

#include<iostream>
using namespace std;
 class vehicle{
    public:
    string brand ="Ford";
    void honk(){
        cout<<"Tuut,";
    }
 };
 class car: public vehical{
    public:
    string model="Mustang";

 };
int main(int argc, char const *argv[])
{
    Car mycar;
    mycar.honk();
    cout<<mycar.brand+ " "+mycar.model;
    return 0;
}
