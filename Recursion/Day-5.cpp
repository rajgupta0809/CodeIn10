class Solution{
	public:
	
	void helper(string s , string tempAns , int index){
	    if(s.size()==index){
	        cout<<tempAns<<endl;
	        return;
	    }
	    
	    //Take
	    helper(s , tempAns+s[index] , index+1);
	    //Not Take
	    helper(s , tempAns , index+1);
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    helper(s , "" , 0);
		    return ans;
		}
};