#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<vector<int>> ans;
    
    void helper(vector<int>A , vector<int> temp , int i){
        if(i == A.size()){
            ans.push_back(temp);
            return;
        }
        
        //Take it
        temp.push_back(A[i]);
        helper(A , temp , i+1);
        
        //Not Take
        temp.pop_back();
        helper(A , temp , i+1);
    }
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<int> temp;
        helper(A , temp , 0);
        sort(ans.begin() , ans.end());
        return ans;
    }
};

int main(){
    return 0;
}