#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i = 0 ;i < n ;i++)
	    {
	        cin>> arr[i];
	    }
	    cin>>k;
	    int count = 1;
	    int h;
	    int iteration;
	    for(int i = 0 ; i<n ;i++)
	    {
	         h = i;
	        iteration = k;
	        count = 1;
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
	    