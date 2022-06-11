//combination sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>arr ,vector<int>temp , int target , int sum , int i){
        //Boundary condition for backtrack
        if(sum > target){
            return;
        }
        
        if(i==arr.size()){
            if(sum == target){
                ans.push_back(temp);
            }
            return;
        }
        
        //inclusion
        sum+=arr[i];
        temp.push_back(arr[i]);
        helper(arr , temp , target , sum , i);
        
        //exclusion
        sum-=arr[i];
        temp.pop_back();
        helper(arr , temp , target , sum , i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates , temp ,target , 0 , 0);
        return ans;
    }
};

int main(){
    return 0;
}