#include<iostream>
#include<stack>

using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    int num=0; 
    

stack.push(num);
stack.pop();
stack.pop();
stack.pop();





while (!stack.empty())
{
    cout<< stack.top()<<"";
    stack.pop();
}


        return 0;
}
