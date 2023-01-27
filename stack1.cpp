//push in stack
#include <iostream>
#include <stack>
using namesapce std;
 int main(int argc, char const *argv[])
 {
    stack<int> mystack;
    stack.push(0);
    stack.push(1);
    stack.push(2);


    while(!mystack.empty()){
        cout<< ' ' << mystack.top();
        mystack.pop();
    }
 }
 