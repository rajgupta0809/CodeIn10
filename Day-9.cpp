#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<string> ans;
    vector<string> keys = {"","","abc","def","ghi","jkl","mno", "pqrs" , "tuv" , "wxyz"};
    //Function to find list of all words possible by pressing given numbers.
    void helper(int a[] , int n , string temp , int i){
        if(i == n){
            ans.push_back(temp);
            return;
        }
        
        for(int j=0;j<keys[a[i]].size();j++){
            helper(a , n , temp+keys[a[i]][j] , i+1);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        helper(a , N , "" , 0);
        return ans;
    }
};

int main(){
    return 0;
}