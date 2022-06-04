//String Palindrome
class Solution{
public:	
	int helper(string S , int s , int e){
    if(s>=e){
        return 1;
    }
    
    if(S[s] != S[e]){
        return 0;
    }else{
        return helper(S , s+1 , e-1);
    }
    return 0;
}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int s = 0;
    int e = S.length() - 1;
    
    return helper(S , s , e);
	}

};

//Reverse an Array

#include <iostream>
using namespace std;

void reverse(int A[] , int N , int s , int e){
    if(s>=e){
        return;
    }
    
    swap(A[s] , A[e]);
    reverse(A , N , s+1 , e-1);
}

int main() {
	//code
	int N;
	cin >> N;
	int A[N];
	for(int i=0;i<N;i++){
	    cin>>A[i];
	}
	int start = 0 , end = N-1;
	reverse(A , N , start , end);
	
	for(int i=0;i<N;i++){
	    cout<<A[i]<<" ";
	}
	return 0;
}