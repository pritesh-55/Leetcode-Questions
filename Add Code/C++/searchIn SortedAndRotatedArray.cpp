#include <bits/stdc++.h>
#include <iostream>

//#define
#define f(a,n) for(int i=a; i<n; i++)
using namespace std;


int main()
{   
    
    // entered size of both arrays
    cout<<"enter size of fst and 2nd arr : ";
    int c,n,m; cin>>n>>m;
    // taken array a
    int  brr[m],arr[n+m];
    cout<<"enter fst arr : ";
    f(0,n)
    {   
        cin>>arr[i];
    }
    // taken array b
    cout<<"enter 2nd arr : ";
   f(0,m)
    {   
        cin>>brr[i];
    }
    // merge them in sorted array without taking extra space..
    int x = 0, i=0,j=0,k=0;
    while(x < m+n)
    {   
        if(arr[i] <= brr[j])
         {
            arr[(n+x)%(m+n)] = arr[i];
            i++;
         }   
         else 
         {
            arr[(n+x)%(m+n)] = brr[j];
            j++;
         }
         x++;
    }
    rotate(arr, arr + n, arr + m+n);
    f(0,m+n)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
