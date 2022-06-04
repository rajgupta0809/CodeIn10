//User function template for C++
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