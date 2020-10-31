#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i;j<n;j++)
        {
            if(a[index]>a[j])
            index=j;
        }
        swap(a[i],a[index]);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[1000];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    selection_sort(a,n);
}
