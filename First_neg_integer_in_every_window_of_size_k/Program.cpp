#include <iostream>
using namespace std;

int main() {
    //Enter the number of Test cases
	int t;
	cin>>t;
	
	while(t--)
	{
        // n - size of the array
        // k - Window size
	    int n,k;
	    
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i = 0 ;i < n ;i++)
	    {
	        cin>> arr[i];
	    }
	    cin>>k;
        //counter  to keep track of the fact that if there is no negative number in the particular window size
	    int count = 1;
        // h,iteration are some helping variable .
	    int h;
	    int iteration;
	    for(int i = 0 ; i<n ;i++)
	    {
	         h = i;
	        iteration = k;
	        count = 1;
            // bool for keeping the track of last window
	        bool t =(h+k)<=n;
	       if(t)
            {
        	       while(iteration--)
        	       {
        	          
        	               
                	            if(h<n)
                	            {
                    	            if(arr[h]<0)
                    	            {
                    	                cout<<arr[h]<<" ";
                    	                break;
                    	            }
                	                
                    	            count++;
                	            }
                    	            h++;
        	         }
        	           
        	        
        	   }
        	        
            	    if(count > k)
            	    {
            	        cout<<"0"<<" ";
            	    }
	       
	    }
	    

	    
	cout<<endl;
	}
	return 0;

}
	   // int iteration = k;
	   // int j = 0;
	   // for(int i = 0 ; i<n ;i++)
	   // {
	   //     j = i;
	   //     while(iteration--)
	   //     {
	   //         if(arr[j]< 0)
	   //         {
	   //             cout<<arr[j]<<" ";
	   //             break;
	   //         }
	   //         j++;
	           
	   //     }
	        
	   //     if(j<=k)
	   //     {
	   //         continue;
	   //     }
	   //     else
	   //     {
	   //         cout<<"0"<<" ";
	   //     }
	        
	        
	   // }
	    