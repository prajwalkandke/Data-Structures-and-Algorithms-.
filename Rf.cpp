#include<iostream>
using namespace std;

int factorial(int n) {

    // base case
    if(n==0)
    return 1;

    int smallerproblem = factorial(n-1);
    int biggerproblem = n * smallerproblem;
    


    return biggerproblem;




}



int main(){
int n;
cin >> n;
int ans = factorial(n);

cout << ans << endl;
 return 0;


}


/* key point
head recursion bcoz rr is up to head on procesing
Base case  
recursion relation
processing 

*/

/*
tail recursion bcoz rr is the end of the function
basic function
processing
recursive function 
*/