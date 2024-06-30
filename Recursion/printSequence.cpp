// Given a number n, print the following pattern without using any loop.
#include <iostream>
using namespace std;

void f(int n){
    //base case
    if(n<0){
        cout<<n<<" ";
        return ;
    }

    //print the current number
    cout<<n<<" ";

    //recursive call
    f(n-5);

    //print the current number again while returning back from recursion
    cout<<n<<" ";
}

int main(){
    int n = 16;
    f(n);
}
