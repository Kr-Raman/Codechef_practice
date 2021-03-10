//Program Runs but give TLE on submittion
#include <iostream>
using namespace std;

int main() {
    //t - no. of cases
		int t;
	cin>>t;
	
	while(t--)
	{
	    //size of each array
	    int n;
	    cin>>n;
	    int arr1[n];
	    int arr2[n];
	    //no of query
	    int q;
	    
	    for(int i = 0 ;i<n ;i++)
	    {
	        cin>>arr1[i];
	    }
	
	    for(int i = 0 ;i<n ;i++)
	    {
	        cin>>arr2[i];
	    }
	    
	    cin>>q;
	    // taking the index of the arr1[] into an array called query
	    int query[q];
	    int index = 0;
	    int num = 0;
	    int i;
	    for(int j = 0 ; j<q ;j++)
	    {
	        cin>>query[j];
	    }
	    while(q--)
	    {
	        i =query[index];
	        num =0;
	        for(int k =0 ;k<n ;k++ )
	        {
	            
	            if(arr2[k]<=arr1[i])
	            {
	                num++;
	                
	                
	            }
	           
	        }
	            index++;
        	    cout<<num<<" ";
        	    cout<<endl;
	    }
	    
	}
	return 0;
}