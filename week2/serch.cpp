#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int count(int arr[], int x, int n)
{
    int *low = lower_bound(arr, arr+n, x);
    if (low == (arr + n) || *low != x)
      return 0;
    int *high = upper_bound(low, arr+n, x);     
    return high - low;
}

int main()
{
    int t,n,p;
    cout<<"Enter number of test cases ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the size ";
        cin>>n;
        int a[n];
        cout<<"Enter the elements ";
        for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
        cout<<"Enter the element to be searched ";
        cin>>p;
        int c=count(a,p,n);
        if(c==0)
        cout<<"Element is not present "<<endl;
        else
        cout<<"Element is present "<<c<<" times"<<endl;
     }
}
