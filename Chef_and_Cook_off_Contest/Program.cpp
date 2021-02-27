#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        //array containing the difficulties we r lookin for
        string diff[]={"cakewalk","simple","easy","easy-medium","medium","medium-hard","hard"};
        int count=0;
        int n;
        cin>>n;
        string inputDiff[n];

        if(n>5)
        {

                for(int i=0;i<n;i++)
                {
                    cin>> inputDiff[i];
                }
                
                for(int i=0;i<=n;i++)
                {
                for(int j=0;j<=6;j++)
                {
                    if( inputDiff[i]==diff[j])
                    {
                        if(inputDiff[i]=="easy-medium")
                        {
                            diff[4]="";
                        }
                        else if(inputDiff[i]=="medium-hard")
                        {
                            diff[6]="";
                        }
                        else if(inputDiff[i]=="medium")
                        {
                            diff[3]="";
                        }
                        else if(inputDiff[i]=="hard")
                        {
                            diff[5]="";
                        }
                        
                        diff[j]="";
                        count++;
                    }
                }
                }
            
                

                cout<<count<<endl;

                if(count == 5)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
        
      
        }



    }
    return 0;

}