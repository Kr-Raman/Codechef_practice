#include<bits/stdc++.h>
using namespace std;
float round1(float var)
{
   
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float k_1,k_2,k_3,v;

        cin>>k_1>>k_2>>k_3>>v;
        float Real_speed;

        Real_speed = k_1*k_2*k_3*v;
        const int dis = 100;
        float total_time = dis/Real_speed;
        float rounded_time;
        rounded_time= round1(total_time);
        cout<<rounded_time<<endl;
        const float record = 9.58;
        // checking whether calculated time is less than the record time
        if(rounded_time<record)
        {
            cout<<"YES"<<endl;
        }
        else if(rounded_time == record)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            
        }
        
        
    }
    return 0;
}