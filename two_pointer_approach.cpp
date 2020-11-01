# C_B_Arrays
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int a[1000];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int s=16;
    
    int i=0;
    int j=n-1;
    
    while(i<j)
    {
        if(a[i]+a[j]>s)
        {
            j--;
        }
        else if(a[i]+a[j]<s)
        {
            i++;
        }
        else
        {
            cout<<a[i]<<" ans"<<a[j]<<endl;
            i++;
            j--;
        }
    }
    
    
    

    
 

   
}
