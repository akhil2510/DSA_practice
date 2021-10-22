#include <iostream>
#include<algorithm>
using namespace std;

int binarysearch(int arr[],int l,int r,int x);

void unionof(int arr1[],int arr2[],int m,int n)
{
    if(m>n)
    {
        int *tempp=arr1;
        arr1=arr2;
        arr2=tempp;
        
        int temp=m;
        m=n;
        n=temp;
    }
    sort(arr1,arr1+m);
    
    for(int i=0;i<m;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int j=0;j<n;j++)
    {
        if(binarysearch(arr1,0,m-1,arr2[j])==-1)
        {
          cout<<arr2[j]<<" ";
        }
    }
}

int binarysearch(int arr[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid = l+ (r-l)/2;
        if(arr[mid]==x)
        {
         return mid;
        }
        if(arr[mid]>x)
        {
            return(binarysearch(arr,l,mid-1,x));
        }
        return(binarysearch(arr,mid+1,r,x));
    }
  return -1; 
}
int main()
{
     int t=0;
     cin>>t;
     while(t-->0)
     {
      int n,m;
      cin>>n>>m;
      int a[n],b[m];
      
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<m;i++)
      {
          cin>>b[i];
      }
      unionof(a,b,m,n);
     
      cout<<endl;
     }
  return 0;
}
