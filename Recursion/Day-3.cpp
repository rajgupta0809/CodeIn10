#include<iostream>
using namespace std;

int countWays(int n){
    if(n<=2){
        return n;
    }

    return countWays(n-1) + countWays(n-2);
}

int main(){
    int n;
    cout<<"Enter the number of stairs: "<<endl;
    cin>>n;

    cout<<countWays(n)<<endl;
    return 0;
}