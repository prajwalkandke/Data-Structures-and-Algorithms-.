/* print alphabet */
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char c;
    cout<<"Enter a is charcter\n";
    cin >> c;
    if((c>='a'&& c<='z') || ( c>='A' && c<='Z'))
    cout << c <<"it is an alphabet";
    else {
        cout << c <<"it is not alphabet";

    }
    return 0;
}
