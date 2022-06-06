#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:

bool helper(vector<int> arr , int sum , int temp , int i){
    if(sum == temp){
        return true;
    }
    
    if(i >= arr.size()){
        return false;
    }
    
    //take
    bool rec1 = helper(arr , sum , temp+arr[i] , i+1);
    
    //not take
    bool rec2 = helper(arr , sum , temp , i+1);
    
    return rec1 || rec2;
}
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        return helper(arr , sum , 0 , 0);
    }
};

int main(){
    return 0;
}