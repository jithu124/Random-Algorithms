//Largest Number formed from an Array 
//Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.
//The result is going to be very large, hence return the result in the form of a string.

#include<iostream>
#include<vector>
#include<algorithm>//for using sort function
using namespace std;

int compare(string s1, string s2)
{
    // returns a value < 0 (s1 is smaller then s2)
    string x = s1;
    x.append(s2);
    
    string y = s2;
    y.append(s1);
    
    return x.compare(y) > 0 ? 1 : 0;
}
  
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(),arr.end(),compare);
	    
	    string ans = "";
	    
	    for(int i = 0;i< arr.size();i++)
	    {
	        ans.append(arr[i]);
	    }
	    
	    return ans;
	}
};

int main(){




return 0;
}
