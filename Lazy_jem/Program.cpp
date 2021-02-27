#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  N,B,M;
        cin>>N>>B>>M;
         long count =0;
        long long ttp= 0;

        while(N>1)
        
        {
                 
                 if(N%2 ==0)
                {
                    N=N/2;
                    ttp = ttp + N*M;
                    //Break ko badhana hai
                    count++;
                    //M ko iincrease krna hai
                    M = M*2;
                }
                else
                {
                    ttp = ttp + ((N+1)/2)*M;
                    count++;
                    M=M*2;
                    N = N-(N+1)/2;
                }
                //cout<<"hello1"<<endl;
        }

        long long ans = ttp+ count*B + M;
        cout<<ans<<endl;
      

    }
}

