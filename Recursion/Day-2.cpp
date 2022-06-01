//Recursion tree
//power of 2
#include<iostream>
using namespace std;

int power(int p , int n){
    if(n==1){
        return p;
    }

    return power(p , n-1)*p;
}

//fibonacci series
int fib(int n){
    if(n<=1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main(){
    int p , n;
    cout<<"Enter the numeber and it's power to be calculated";
    cin>>p>>n;

    cout<<power(p , n)<<endl;
    cout<<fib(n)<<endl;
    return 0;
}