// Q2 - Find m-th summation of first n natural numbers where m-th summation of first n natural
// numbers is defined as following:
// If m > 1: SUM(n, m) = SUM(SUM(n, m - 1), 1)
// Else :SUM(n, 1) = Sum of first n natural numbers.

#include <iostream>
using namespace std;

int sum(int n,int m){
    //base case
    if(m == 1){
        return n*(n+1)/2;
    }
    else{
        return sum(sum(n,m-1),1);
    }
}

int main(){
    int n , m ;
    cin>>n>>m;
    cout<<sum(n,m);
    return 0;
}